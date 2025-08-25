#ifndef BOARD_H
#define BOARD_H

#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QString>
#include <QDebug>
#include <QCoreApplication>
#include <QVariantMap>

#include "Cell.h"

class Board
{

private:
    static Board* instance;
    int id;
    QVector<QVariantMap> data;
    Board();

public:
    Board(const Board&) = delete;
    void operator=(const Board&) = delete;

    static Board* getInstance() {
        if (!instance)
            instance = new Board();
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
                cell["CellID"] = cellID++;

                if (ch == '1')
                    cell["CellType"] = Cell::Attacker;
                else if (ch == '2')
                    cell["CellType"] = Cell::Defender;
                else if (ch == '~')
                    cell["CellType"] = Cell::Water;
                else if (ch == '#')
                    cell["CellType"] = Cell::Rock;
                else
                    cell["CellType"] = Cell::Ground;

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
