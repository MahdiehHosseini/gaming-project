#ifndef GAMEBOARDPAGE_H
#define GAMEBOARDPAGE_H

#include <QMainWindow>

namespace Ui {
class gameBoardPage;
}

class gameBoardPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit gameBoardPage(QWidget *parent = nullptr, const QString &user1 = "", const QString &user2 = "");
    ~gameBoardPage();

private slots:
    void on_board_clicked();
    void on_prevBoardButton_clicked();
    void on_nextBoardButton_clicked();

private:
    Ui::gameBoardPage *ui;
};

#endif // GAMEBOARDPAGE_H
