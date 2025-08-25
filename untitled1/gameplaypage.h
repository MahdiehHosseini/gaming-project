#ifndef GAMEPLAYPAGE_H
#define GAMEPLAYPAGE_H

#include "agent.h"

#include <QMainWindow>
#include <QSignalMapper>

namespace Ui {
class gameplayPage;
}

class gameplayPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit gameplayPage(QWidget *parent = nullptr);
    void render();
    void setCell(int newCellID);
    ~gameplayPage();

private slots:
    void onAgentButtonClicked(const QString& agentName);
    void on_anyCell_clicked();

private:
    Ui::gameplayPage *ui;
    QSignalMapper *signalMapper;
};

#endif // GAMEPLAYPAGE_H
