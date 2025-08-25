/********************************************************************************
** Form generated from reading UI file 'userspage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSPAGE_H
#define UI_USERSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usersPage
{
public:
    QWidget *centralwidget;
    QPushButton *startGameButton;
    QLabel *user1Label;
    QLabel *backgroundUsersLabel;
    QLineEdit *user2LineEdit;
    QLabel *user2Label;
    QLineEdit *user1LineEdit;
    QLabel *user1errorLabel;
    QLabel *user2errorLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *usersPage)
    {
        if (usersPage->objectName().isEmpty())
            usersPage->setObjectName("usersPage");
        usersPage->resize(965, 423);
        centralwidget = new QWidget(usersPage);
        centralwidget->setObjectName("centralwidget");
        startGameButton = new QPushButton(centralwidget);
        startGameButton->setObjectName("startGameButton");
        startGameButton->setGeometry(QRect(340, 300, 341, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Trebuchet MS")});
        font.setPointSize(16);
        font.setBold(true);
        startGameButton->setFont(font);
        startGameButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        startGameButton->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: rgb(42, 33, 48);\n"
"border-radius: 25px;"));
        user1Label = new QLabel(centralwidget);
        user1Label->setObjectName("user1Label");
        user1Label->setGeometry(QRect(190, 100, 181, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Code Pro")});
        font1.setPointSize(22);
        font1.setBold(true);
        user1Label->setFont(font1);
        user1Label->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        user1Label->setStyleSheet(QString::fromUtf8("color: #fff;"));
        backgroundUsersLabel = new QLabel(centralwidget);
        backgroundUsersLabel->setObjectName("backgroundUsersLabel");
        backgroundUsersLabel->setGeometry(QRect(0, 0, 961, 381));
        QFont font2;
        font2.setPointSize(14);
        backgroundUsersLabel->setFont(font2);
        backgroundUsersLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/mainbg.jpg")));
        backgroundUsersLabel->setScaledContents(true);
        user2LineEdit = new QLineEdit(centralwidget);
        user2LineEdit->setObjectName("user2LineEdit");
        user2LineEdit->setGeometry(QRect(560, 160, 281, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(14);
        user2LineEdit->setFont(font3);
        user2LineEdit->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: white;\n"
"padding: 4px;\n"
"border-color: rgb(255, 255, 255);"));
        user2Label = new QLabel(centralwidget);
        user2Label->setObjectName("user2Label");
        user2Label->setGeometry(QRect(600, 100, 191, 41));
        user2Label->setFont(font1);
        user2Label->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        user2Label->setStyleSheet(QString::fromUtf8("color: #fff;"));
        user1LineEdit = new QLineEdit(centralwidget);
        user1LineEdit->setObjectName("user1LineEdit");
        user1LineEdit->setGeometry(QRect(140, 160, 281, 51));
        user1LineEdit->setFont(font3);
        user1LineEdit->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: white;\n"
"padding: 4px;\n"
"border-color: rgb(255, 255, 255);"));
        user1errorLabel = new QLabel(centralwidget);
        user1errorLabel->setObjectName("user1errorLabel");
        user1errorLabel->setGeometry(QRect(140, 210, 261, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Source Code Pro")});
        font4.setPointSize(10);
        font4.setBold(true);
        user1errorLabel->setFont(font4);
        user1errorLabel->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        user1errorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 133, 133);"));
        user2errorLabel = new QLabel(centralwidget);
        user2errorLabel->setObjectName("user2errorLabel");
        user2errorLabel->setGeometry(QRect(560, 210, 261, 41));
        user2errorLabel->setFont(font4);
        user2errorLabel->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        user2errorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 133, 133);"));
        usersPage->setCentralWidget(centralwidget);
        backgroundUsersLabel->raise();
        startGameButton->raise();
        user1Label->raise();
        user2LineEdit->raise();
        user2Label->raise();
        user1LineEdit->raise();
        user1errorLabel->raise();
        user2errorLabel->raise();
        menubar = new QMenuBar(usersPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 965, 21));
        usersPage->setMenuBar(menubar);
        statusbar = new QStatusBar(usersPage);
        statusbar->setObjectName("statusbar");
        usersPage->setStatusBar(statusbar);

        retranslateUi(usersPage);

        QMetaObject::connectSlotsByName(usersPage);
    } // setupUi

    void retranslateUi(QMainWindow *usersPage)
    {
        usersPage->setWindowTitle(QCoreApplication::translate("usersPage", "MainWindow", nullptr));
        startGameButton->setText(QCoreApplication::translate("usersPage", "start the game", nullptr));
        user1Label->setText(QCoreApplication::translate("usersPage", "first user", nullptr));
        backgroundUsersLabel->setText(QString());
        user2LineEdit->setPlaceholderText(QCoreApplication::translate("usersPage", "player 2", nullptr));
        user2Label->setText(QCoreApplication::translate("usersPage", "second user", nullptr));
        user1LineEdit->setPlaceholderText(QCoreApplication::translate("usersPage", "player 1", nullptr));
        user1errorLabel->setText(QCoreApplication::translate("usersPage", "please enter the first user info", nullptr));
        user2errorLabel->setText(QCoreApplication::translate("usersPage", "please enter the second user info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usersPage: public Ui_usersPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSPAGE_H
