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
    QPushButton *board;
    QPushButton *nextBoardButton;
    QPushButton *prevBoardButton;
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
        board = new QPushButton(centralwidget);
        board->setObjectName("board");
        board->setEnabled(true);
        board->setGeometry(QRect(270, 100, 411, 231));
        board->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/board1.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        board->setIcon(icon);
        board->setIconSize(QSize(420, 250));
        nextBoardButton = new QPushButton(centralwidget);
        nextBoardButton->setObjectName("nextBoardButton");
        nextBoardButton->setEnabled(true);
        nextBoardButton->setGeometry(QRect(710, 200, 71, 41));
        nextBoardButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        nextBoardButton->setStyleSheet(QString::fromUtf8("border:0;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        nextBoardButton->setIcon(icon1);
        nextBoardButton->setIconSize(QSize(44, 38));
        prevBoardButton = new QPushButton(centralwidget);
        prevBoardButton->setObjectName("prevBoardButton");
        prevBoardButton->setEnabled(true);
        prevBoardButton->setGeometry(QRect(170, 200, 71, 41));
        prevBoardButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        prevBoardButton->setStyleSheet(QString::fromUtf8("border:0;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/prev.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        prevBoardButton->setIcon(icon2);
        prevBoardButton->setIconSize(QSize(44, 38));
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
        board->setText(QString());
        nextBoardButton->setText(QString());
        prevBoardButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gameBoardPage: public Ui_gameBoardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBOARDPAGE_H
