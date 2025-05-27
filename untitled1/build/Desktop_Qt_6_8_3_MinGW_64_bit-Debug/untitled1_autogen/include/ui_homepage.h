/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homePage
{
public:
    QWidget *centralwidget;
    QPushButton *gamePushButton;
    QLabel *backgroundHomeLabel;
    QPushButton *galleryPushButton;
    QPushButton *galleryPushButton_2;
    QLabel *backgroundHomeLabel_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *homePage)
    {
        if (homePage->objectName().isEmpty())
            homePage->setObjectName("homePage");
        homePage->setEnabled(true);
        homePage->resize(967, 438);
        homePage->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(homePage);
        centralwidget->setObjectName("centralwidget");
        gamePushButton = new QPushButton(centralwidget);
        gamePushButton->setObjectName("gamePushButton");
        gamePushButton->setGeometry(QRect(810, 310, 151, 51));
        gamePushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        gamePushButton->setStyleSheet(QString::fromUtf8("border: 0;\n"
"background-color: transparent;\n"
"border-radius: 100%;"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoNext));
        gamePushButton->setIcon(icon);
        backgroundHomeLabel = new QLabel(centralwidget);
        backgroundHomeLabel->setObjectName("backgroundHomeLabel");
        backgroundHomeLabel->setGeometry(QRect(330, 0, 311, 451));
        backgroundHomeLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/home.jpg")));
        backgroundHomeLabel->setScaledContents(true);
        galleryPushButton = new QPushButton(centralwidget);
        galleryPushButton->setObjectName("galleryPushButton");
        galleryPushButton->setGeometry(QRect(70, 300, 161, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminal")});
        font.setWeight(QFont::ExtraBold);
        galleryPushButton->setFont(font);
        galleryPushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        galleryPushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-weight: 800;\n"
"font-size:  30px;\n"
"border: 0;"));
        galleryPushButton_2 = new QPushButton(centralwidget);
        galleryPushButton_2->setObjectName("galleryPushButton_2");
        galleryPushButton_2->setGeometry(QRect(790, 310, 101, 51));
        galleryPushButton_2->setFont(font);
        galleryPushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        galleryPushButton_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-weight: 800;\n"
"font-size:  30px;\n"
"border: 0;"));
        backgroundHomeLabel_2 = new QLabel(centralwidget);
        backgroundHomeLabel_2->setObjectName("backgroundHomeLabel_2");
        backgroundHomeLabel_2->setGeometry(QRect(0, 0, 961, 451));
        backgroundHomeLabel_2->setStyleSheet(QString::fromUtf8("background-color: rgb(195, 40, 142);"));
        backgroundHomeLabel_2->setScaledContents(true);
        homePage->setCentralWidget(centralwidget);
        backgroundHomeLabel_2->raise();
        backgroundHomeLabel->raise();
        gamePushButton->raise();
        galleryPushButton->raise();
        galleryPushButton_2->raise();
        menubar = new QMenuBar(homePage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 967, 21));
        homePage->setMenuBar(menubar);
        statusbar = new QStatusBar(homePage);
        statusbar->setObjectName("statusbar");
        homePage->setStatusBar(statusbar);

        retranslateUi(homePage);

        QMetaObject::connectSlotsByName(homePage);
    } // setupUi

    void retranslateUi(QMainWindow *homePage)
    {
        homePage->setWindowTitle(QCoreApplication::translate("homePage", "MainWindow", nullptr));
        gamePushButton->setText(QString());
        backgroundHomeLabel->setText(QString());
        galleryPushButton->setText(QCoreApplication::translate("homePage", "GALLERY", nullptr));
        galleryPushButton_2->setText(QCoreApplication::translate("homePage", "play", nullptr));
        backgroundHomeLabel_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class homePage: public Ui_homePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
