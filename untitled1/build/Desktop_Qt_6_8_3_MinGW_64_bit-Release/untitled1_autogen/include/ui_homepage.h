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
    QPushButton *galleryPushButton;
    QPushButton *gamePushButton;
    QLabel *backgroundHomeLabel;
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
        galleryPushButton = new QPushButton(centralwidget);
        galleryPushButton->setObjectName("galleryPushButton");
        galleryPushButton->setGeometry(QRect(460, 320, 291, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminal")});
        font.setWeight(QFont::ExtraBold);
        galleryPushButton->setFont(font);
        galleryPushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        galleryPushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-weight: 800;\n"
"font-size: 20px;\n"
"border: 0;"));
        gamePushButton = new QPushButton(centralwidget);
        gamePushButton->setObjectName("gamePushButton");
        gamePushButton->setGeometry(QRect(460, 260, 291, 41));
        gamePushButton->setFont(font);
        gamePushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        gamePushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-weight: 800;\n"
"font-size:  30px;\n"
"border: 0;"));
        backgroundHomeLabel = new QLabel(centralwidget);
        backgroundHomeLabel->setObjectName("backgroundHomeLabel");
        backgroundHomeLabel->setGeometry(QRect(0, -70, 961, 481));
        backgroundHomeLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/home.jpg")));
        backgroundHomeLabel->setScaledContents(true);
        homePage->setCentralWidget(centralwidget);
        backgroundHomeLabel->raise();
        galleryPushButton->raise();
        gamePushButton->raise();
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
        galleryPushButton->setText(QString());
        gamePushButton->setText(QString());
        backgroundHomeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class homePage: public Ui_homePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
