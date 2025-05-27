#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "homepage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_landingPushButton_clicked()
{
    // open home page
    homePage *homePage = new class homePage(this);
    this->close();
    homePage->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
