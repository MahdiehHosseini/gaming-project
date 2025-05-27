#include "homepage.h"
#include "ui_homepage.h"
#include <QVBoxLayout>
#include <QLabel>
#include "gallerypage.h"
#include "userspage.h"

homePage::homePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::homePage)
{
    ui->setupUi(this);
}

void homePage::on_galleryPushButton_clicked()
{
    // open gallery page
    galleryPage *galleryPage = new class galleryPage(this);
    this->close();
    galleryPage->show();
}

void homePage::on_gamePushButton_clicked()
{
    // open get user names page
    usersPage *usersPage = new class usersPage(this);
    this->close();
    usersPage->show();

}

homePage::~homePage()
{
    delete ui;
}

