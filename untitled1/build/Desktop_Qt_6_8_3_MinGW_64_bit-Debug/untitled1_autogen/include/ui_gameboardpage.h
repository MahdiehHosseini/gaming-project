/********************************************************************************
** Form generated from reading UI file 'gameboardpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEBOARDPAGE_H
#define UI_GAMEBOARDPAGE_H

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

class Ui_gameBoardPage
{
public:
    QWidget *centralwidget;
    QLabel *backgroundBoardLabel;
    QLabel *user1Label;
    QLabel *user2Label;
    QLabel *subText;
    QPushButton *board1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gameBoardPage)
    {
        if (gameBoardPage->objectName().isEmpty())
            gameBoardPage->setObjectName("gameBoardPage");
        gameBoardPage->resize(960, 431);
        centralwidget = new QWidget(gameBoardPage);
        centralwidget->setObjectName("centralwidget");
        backgroundBoardLabel = new QLabel(centralwidget);
        backgroundBoardLabel->setObjectName("backgroundBoardLabel");
        backgroundBoardLabel->setGeometry(QRect(0, -20, 961, 491));
        backgroundBoardLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/gallery.jpg")));
        backgroundBoardLabel->setScaledContents(true);
        user1Label = new QLabel(centralwidget);
        user1Label->setObjectName("user1Label");
        user1Label->setGeometry(QRect(110, 10, 171, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Source Code Pro")});
        font.setPointSize(22);
        font.setBold(true);
        user1Label->setFont(font);
        user1Label->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        user1Label->setStyleSheet(QString::fromUtf8("color: #fff;"));
        user1Label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        user2Label = new QLabel(centralwidget);
        user2Label->setObjectName("user2Label");
        user2Label->setGeometry(QRect(680, 10, 191, 41));
        user2Label->setFont(font);
        user2Label->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        user2Label->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"text-align: center;"));
        user2Label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        subText = new QLabel(centralwidget);
        subText->setObjectName("subText");
        subText->setGeometry(QRect(330, 40, 281, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Code Pro")});
        font1.setPointSize(14);
        font1.setBold(true);
        subText->setFont(font1);
        subText->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        subText->setStyleSheet(QString::fromUtf8("color: rgb(209, 209, 209);"));
        board1 = new QPushButton(centralwidget);
        board1->setObjectName("board1");
        board1->setEnabled(true);
        board1->setGeometry(QRect(320, 120, 301, 161));
        board1->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/board.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        board1->setIcon(icon);
        board1->setIconSize(QSize(310, 174));
        gameBoardPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gameBoardPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 960, 21));
        gameBoardPage->setMenuBar(menubar);
        statusbar = new QStatusBar(gameBoardPage);
        statusbar->setObjectName("statusbar");
        gameBoardPage->setStatusBar(statusbar);

        retranslateUi(gameBoardPage);

        QMetaObject::connectSlotsByName(gameBoardPage);
    } // setupUi

    void retranslateUi(QMainWindow *gameBoardPage)
    {
        gameBoardPage->setWindowTitle(QCoreApplication::translate("gameBoardPage", "MainWindow", nullptr));
        backgroundBoardLabel->setText(QString());
        user1Label->setText(QString());
        user2Label->setText(QString());
        subText->setText(QCoreApplication::translate("gameBoardPage", "chose your tactical board", nullptr));
        board1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gameBoardPage: public Ui_gameBoardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBOARDPAGE_H
