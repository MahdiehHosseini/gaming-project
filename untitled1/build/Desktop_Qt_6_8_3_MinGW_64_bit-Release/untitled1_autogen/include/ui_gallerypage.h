/********************************************************************************
** Form generated from reading UI file 'gallerypage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GALLERYPAGE_H
#define UI_GALLERYPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_galleryPage
{
public:
    QWidget *centralwidget;
    QPushButton *page;
    QPushButton *prevPageButton;
    QPushButton *nextPageButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *galleryPage)
    {
        if (galleryPage->objectName().isEmpty())
            galleryPage->setObjectName("galleryPage");
        galleryPage->resize(965, 434);
        centralwidget = new QWidget(galleryPage);
        centralwidget->setObjectName("centralwidget");
        page = new QPushButton(centralwidget);
        page->setObjectName("page");
        page->setEnabled(true);
        page->setGeometry(QRect(-10, -10, 981, 431));
        page->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/gallery1.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        page->setIcon(icon);
        page->setIconSize(QSize(962, 700));
        prevPageButton = new QPushButton(centralwidget);
        prevPageButton->setObjectName("prevPageButton");
        prevPageButton->setEnabled(true);
        prevPageButton->setGeometry(QRect(30, 180, 71, 41));
        prevPageButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        prevPageButton->setStyleSheet(QString::fromUtf8("border:0;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/prev.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        prevPageButton->setIcon(icon1);
        prevPageButton->setIconSize(QSize(44, 38));
        nextPageButton = new QPushButton(centralwidget);
        nextPageButton->setObjectName("nextPageButton");
        nextPageButton->setEnabled(true);
        nextPageButton->setGeometry(QRect(870, 180, 71, 41));
        nextPageButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        nextPageButton->setStyleSheet(QString::fromUtf8("border:0;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        nextPageButton->setIcon(icon2);
        nextPageButton->setIconSize(QSize(44, 38));
        galleryPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(galleryPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 965, 21));
        galleryPage->setMenuBar(menubar);
        statusbar = new QStatusBar(galleryPage);
        statusbar->setObjectName("statusbar");
        galleryPage->setStatusBar(statusbar);

        retranslateUi(galleryPage);

        QMetaObject::connectSlotsByName(galleryPage);
    } // setupUi

    void retranslateUi(QMainWindow *galleryPage)
    {
        galleryPage->setWindowTitle(QCoreApplication::translate("galleryPage", "MainWindow", nullptr));
        page->setText(QString());
        prevPageButton->setText(QString());
        nextPageButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class galleryPage: public Ui_galleryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GALLERYPAGE_H
