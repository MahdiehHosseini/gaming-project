#include <QString>

#include "gallerypage.h"
#include "ui_gallerypage.h"

galleryPage::galleryPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::galleryPage)
{
    ui->setupUi(this);

    ui->prevPageButton->setEnabled(false);
}

int currentPageIndex = 1;

void galleryPage::on_nextPageButton_clicked(){
    currentPageIndex++;

    if(currentPageIndex == 7){
        ui->nextPageButton->setEnabled(false);
    } else if(currentPageIndex == 2){
        ui->prevPageButton->setEnabled(true);
    }

    ui->page->setIcon(QIcon(QString(":/images/gallery%1.jpg").arg(currentPageIndex)));

}

void galleryPage::on_prevPageButton_clicked(){
    currentPageIndex--;

    if(currentPageIndex == 1){
        ui->prevPageButton->setEnabled(false);
    } else if(currentPageIndex == 6){
        ui->nextPageButton->setEnabled(true);
    }

    ui->page->setIcon(QIcon(QString(":/images/gallery%1.jpg").arg(currentPageIndex)));

}

galleryPage::~galleryPage()
{
    delete ui;
}
