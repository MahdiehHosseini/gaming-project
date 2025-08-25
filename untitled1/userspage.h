#ifndef USERSPAGE_H
#define USERSPAGE_H

#include <QMainWindow>
#include "agent.h"
#include "cell.h"

namespace Ui {
class usersPage;
}

class usersPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit usersPage(QWidget *parent = nullptr);
    ~usersPage();

private slots:
    void on_startGameButton_clicked();

private:
    Ui::usersPage *ui;

    QVector<Agent*> Agents;
    QVector<Cell*> Board;

    void initializeBoard();
    void renderBoard();
    void startGame();
};

#endif // USERSPAGE_H
