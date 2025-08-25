#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QString>
#include <QDebug>
#include <QCoreApplication>
#include <QVariantMap>

#include "gameboardpage.h"
#include "ui_gameboardpage.h"
#include "board.h"
#include "gameplaypage.h"


gameBoardPage::gameBoardPage(QWidget *parent, const QString &user1, const QString &user2)
    : QMainWindow(parent)
    , ui(new Ui::gameBoardPage)
{
    ui->setupUi(this);
    ui->user1Label->setText(user1);
    ui->user2Label->setText(user2);

    ui->prevBoardButton->setEnabled(false);
}

int currentBoardIndex = 1;

void gameBoardPage::on_nextBoardButton_clicked(){
    currentBoardIndex++;

    if(currentBoardIndex == 8){
        ui->nextBoardButton->setEnabled(false);
    } else if(currentBoardIndex == 2){
        ui->prevBoardButton->setEnabled(true);
    }

    ui->board->setIcon(QIcon(QString(":/images/board%1.jpg").arg(currentBoardIndex)));

}

void gameBoardPage::on_prevBoardButton_clicked(){
    currentBoardIndex--;

    if(currentBoardIndex == 1){
        ui->prevBoardButton->setEnabled(false);
    } else if(currentBoardIndex == 7){
        ui->nextBoardButton->setEnabled(true);
    }

    ui->board->setIcon(QIcon(QString(":/images/board%1.jpg").arg(currentBoardIndex)));

}

void gameBoardPage::on_board_clicked()
{

    QVector<QVariantMap> newData = Board::getInstance()->parseBoards(1 ,QString(":/boards/board%1.txt").arg(currentBoardIndex));

    Board::getInstance()->setData(currentBoardIndex, newData);

    //open game page
    gameplayPage *gameplayPage = new class gameplayPage(this);
    this->close();
    gameplayPage->show();
}

gameBoardPage::~gameBoardPage()
{
    delete ui;
}

