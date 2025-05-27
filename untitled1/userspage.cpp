#include "userspage.h"
#include "ui_userspage.h"
#include "gameboardpage.h"

usersPage::usersPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::usersPage)
{
    ui->setupUi(this);
    ui->user1errorLabel->hide();
    ui->user2errorLabel->hide();
}

QString user1name;
QString user2name;

void usersPage::on_startGameButton_clicked()
{
    user1name = ui->user1LineEdit->text();
    user2name = ui->user2LineEdit->text();

    if(user1name.isEmpty() || user2name.isEmpty()){
        // show error messages
        user1name.isEmpty() ? ui->user1errorLabel->show() : ui->user1errorLabel->hide();
        user2name.isEmpty() ? ui->user2errorLabel->show() : ui->user2errorLabel->hide();
    } else {
        // open game page
        gameBoardPage *gameBoardPage = new class gameBoardPage(this, user1name, user2name);
        this->close();
        gameBoardPage->show();
    }
}


usersPage::~usersPage()
{
    delete ui;
}
