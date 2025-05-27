#ifndef BOARD_H
#define BOARD_H

#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QString>
#include <QDebug>
#include <QCoreApplication>
#include <QVariantMap>

class board
{

private:
    static board* instance;
    int id;
    QVector<QVariantMap> data;
    board();

public:
    board(const board&) = delete;
    void operator=(const board&) = delete;

    static board* getInstance() {
        if (!instance)
            instance = new board();
        return instance;
    }

    QVector<QVariantMap> parseBoards(int id, const QString &filePath) {
        this->id = id;

        QVector<QVariantMap> result;
        QFile file(filePath);

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qWarning() << "Cannot open file:" << filePath;
            return result;
        }

        QTextStream in(&file);
        QStringList lines;
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (!line.trimmed().isEmpty())
                lines.append(line);
        }

        int cellID = 1;

        for (int i = 0; i < lines.size(); ++i) {
            const QString &line = lines[i];
            for (int j = 0; j < line.length(); ++j) {
                QChar rightCh = line[j+2];
                QChar ch = line[j];
                QChar leftCh = line[j-1];

                if (!((rightCh == '\\' && ch == ' ' && leftCh == '/') || (ch == '1' || ch == '2' || ch == '~' || ch == '#')) || ch == '/' || ch == '\\' || ch == '_') continue;

                QVariantMap cell;
                cell["cellID"] = cellID++;

                if (ch == '1')
                    cell["agentID"] = 1;
                else if (ch == '2')
                    cell["agentID"] = 2;
                else if (ch == '~')
                    cell["agentID"] = 3;
                else if (ch == '#')
                    cell["agentID"] = 4;
                else
                    cell["agentID"] = -1;

                result.append(cell);

                if(cellID == 42) {
                    j = line.length();
                    i = lines.size();
                };
            }
        }

        return result;
    }

    QVector<QVariantMap> getData() {
        return this->data;
    }

    void setData(int id, QVector<QVariantMap> newData) {
        this->id = id;
        this->data = newData;
    }
};

#endif // BOARD_H
