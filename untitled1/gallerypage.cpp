#include "gallerypage.h"
#include "ui_gallerypage.h"

galleryPage::galleryPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::galleryPage)
{
    ui->setupUi(this);
}

galleryPage::~galleryPage()
{
    delete ui;
}
