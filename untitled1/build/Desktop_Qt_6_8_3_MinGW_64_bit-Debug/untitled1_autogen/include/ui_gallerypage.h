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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_galleryPage
{
public:
    QWidget *centralwidget;
    QLabel *hashLabel;
    QLabel *tildaLabel;
    QLabel *defaultAgentLabel;
    QLabel *backgroundGalleryLabel;
    QLabel *hashLabel_2;
    QLabel *tildaLabel_2;
    QLabel *defaultAgentLabel_2;
    QLabel *hashLabel_3;
    QLabel *agentHashImage;
    QLabel *agent2GalleryLabel;
    QLabel *agentTildaImage;
    QLabel *agentUser1Image;
    QLabel *hashLabel_4;
    QLabel *agentUser2Image;
    QLabel *agent3GalleryLabel;
    QLabel *agent4GalleryLabel;
    QLabel *hashLabel_5;
    QLabel *hashLabel_6;
    QLabel *backgroundBoardLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *galleryPage)
    {
        if (galleryPage->objectName().isEmpty())
            galleryPage->setObjectName("galleryPage");
        galleryPage->resize(965, 434);
        centralwidget = new QWidget(galleryPage);
        centralwidget->setObjectName("centralwidget");
        hashLabel = new QLabel(centralwidget);
        hashLabel->setObjectName("hashLabel");
        hashLabel->setGeometry(QRect(690, 770, 131, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Source Code Pro")});
        font.setPointSize(20);
        font.setBold(true);
        hashLabel->setFont(font);
        hashLabel->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        hashLabel->setStyleSheet(QString::fromUtf8("color: #fff;"));
        tildaLabel = new QLabel(centralwidget);
        tildaLabel->setObjectName("tildaLabel");
        tildaLabel->setGeometry(QRect(1370, 770, 151, 41));
        tildaLabel->setFont(font);
        tildaLabel->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        tildaLabel->setStyleSheet(QString::fromUtf8("color: #fff;"));
        defaultAgentLabel = new QLabel(centralwidget);
        defaultAgentLabel->setObjectName("defaultAgentLabel");
        defaultAgentLabel->setGeometry(QRect(930, 770, 321, 41));
        defaultAgentLabel->setFont(font);
        defaultAgentLabel->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        defaultAgentLabel->setStyleSheet(QString::fromUtf8("color: #fff;"));
        backgroundGalleryLabel = new QLabel(centralwidget);
        backgroundGalleryLabel->setObjectName("backgroundGalleryLabel");
        backgroundGalleryLabel->setGeometry(QRect(620, 480, 961, 381));
        backgroundGalleryLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/gallery.jpg")));
        backgroundGalleryLabel->setScaledContents(true);
        hashLabel_2 = new QLabel(centralwidget);
        hashLabel_2->setObjectName("hashLabel_2");
        hashLabel_2->setGeometry(QRect(70, 150, 111, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Code Pro")});
        font1.setPointSize(16);
        font1.setBold(true);
        hashLabel_2->setFont(font1);
        hashLabel_2->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        hashLabel_2->setStyleSheet(QString::fromUtf8("color: #fff;"));
        tildaLabel_2 = new QLabel(centralwidget);
        tildaLabel_2->setObjectName("tildaLabel_2");
        tildaLabel_2->setGeometry(QRect(640, 150, 121, 41));
        tildaLabel_2->setFont(font1);
        tildaLabel_2->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        tildaLabel_2->setStyleSheet(QString::fromUtf8("color: #fff;"));
        defaultAgentLabel_2 = new QLabel(centralwidget);
        defaultAgentLabel_2->setObjectName("defaultAgentLabel_2");
        defaultAgentLabel_2->setGeometry(QRect(340, 320, 261, 41));
        defaultAgentLabel_2->setFont(font1);
        defaultAgentLabel_2->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        defaultAgentLabel_2->setStyleSheet(QString::fromUtf8("color: #fff;"));
        hashLabel_3 = new QLabel(centralwidget);
        hashLabel_3->setObjectName("hashLabel_3");
        hashLabel_3->setGeometry(QRect(230, 150, 71, 41));
        hashLabel_3->setFont(font1);
        hashLabel_3->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        hashLabel_3->setStyleSheet(QString::fromUtf8("color: #fff;"));
        agentHashImage = new QLabel(centralwidget);
        agentHashImage->setObjectName("agentHashImage");
        agentHashImage->setGeometry(QRect(60, 50, 111, 101));
        agentHashImage->setPixmap(QPixmap(QString::fromUtf8(":/images/agent1.png")));
        agentHashImage->setScaledContents(true);
        agent2GalleryLabel = new QLabel(centralwidget);
        agent2GalleryLabel->setObjectName("agent2GalleryLabel");
        agent2GalleryLabel->setGeometry(QRect(210, 50, 111, 101));
        agent2GalleryLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/agent2.png")));
        agent2GalleryLabel->setScaledContents(true);
        agentTildaImage = new QLabel(centralwidget);
        agentTildaImage->setObjectName("agentTildaImage");
        agentTildaImage->setGeometry(QRect(640, 50, 111, 101));
        agentTildaImage->setPixmap(QPixmap(QString::fromUtf8(":/images/agent5.png")));
        agentTildaImage->setScaledContents(true);
        agentUser1Image = new QLabel(centralwidget);
        agentUser1Image->setObjectName("agentUser1Image");
        agentUser1Image->setGeometry(QRect(350, 220, 101, 91));
        agentUser1Image->setPixmap(QPixmap(QString::fromUtf8(":/images/agent6.png")));
        agentUser1Image->setScaledContents(true);
        hashLabel_4 = new QLabel(centralwidget);
        hashLabel_4->setObjectName("hashLabel_4");
        hashLabel_4->setGeometry(QRect(800, 150, 71, 41));
        hashLabel_4->setFont(font1);
        hashLabel_4->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        hashLabel_4->setStyleSheet(QString::fromUtf8("color: #fff;"));
        agentUser2Image = new QLabel(centralwidget);
        agentUser2Image->setObjectName("agentUser2Image");
        agentUser2Image->setGeometry(QRect(480, 220, 101, 91));
        agentUser2Image->setPixmap(QPixmap(QString::fromUtf8(":/images/agent7.png")));
        agentUser2Image->setScaledContents(true);
        agent3GalleryLabel = new QLabel(centralwidget);
        agent3GalleryLabel->setObjectName("agent3GalleryLabel");
        agent3GalleryLabel->setGeometry(QRect(780, 50, 111, 101));
        agent3GalleryLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/agent3.png")));
        agent3GalleryLabel->setScaledContents(true);
        agent4GalleryLabel = new QLabel(centralwidget);
        agent4GalleryLabel->setObjectName("agent4GalleryLabel");
        agent4GalleryLabel->setGeometry(QRect(400, 50, 111, 101));
        agent4GalleryLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/agent4.png")));
        agent4GalleryLabel->setScaledContents(true);
        hashLabel_5 = new QLabel(centralwidget);
        hashLabel_5->setObjectName("hashLabel_5");
        hashLabel_5->setGeometry(QRect(460, 140, 71, 41));
        hashLabel_5->setFont(font1);
        hashLabel_5->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        hashLabel_5->setStyleSheet(QString::fromUtf8("color: #fff;"));
        hashLabel_6 = new QLabel(centralwidget);
        hashLabel_6->setObjectName("hashLabel_6");
        hashLabel_6->setGeometry(QRect(420, 150, 71, 41));
        hashLabel_6->setFont(font1);
        hashLabel_6->setCursor(QCursor(Qt::CursorShape::BusyCursor));
        hashLabel_6->setStyleSheet(QString::fromUtf8("color: #fff;"));
        backgroundBoardLabel = new QLabel(centralwidget);
        backgroundBoardLabel->setObjectName("backgroundBoardLabel");
        backgroundBoardLabel->setGeometry(QRect(0, -50, 961, 491));
        backgroundBoardLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/gallery.jpg")));
        backgroundBoardLabel->setScaledContents(true);
        galleryPage->setCentralWidget(centralwidget);
        backgroundBoardLabel->raise();
        tildaLabel_2->raise();
        hashLabel_2->raise();
        defaultAgentLabel_2->raise();
        hashLabel->raise();
        tildaLabel->raise();
        defaultAgentLabel->raise();
        backgroundGalleryLabel->raise();
        hashLabel_3->raise();
        agentHashImage->raise();
        agent2GalleryLabel->raise();
        agentTildaImage->raise();
        agentUser1Image->raise();
        hashLabel_4->raise();
        agentUser2Image->raise();
        agent3GalleryLabel->raise();
        agent4GalleryLabel->raise();
        hashLabel_5->raise();
        hashLabel_6->raise();
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
        hashLabel->setText(QCoreApplication::translate("galleryPage", "hash (#)", nullptr));
        tildaLabel->setText(QCoreApplication::translate("galleryPage", "tilda (~)", nullptr));
        defaultAgentLabel->setText(QCoreApplication::translate("galleryPage", "default agent (1, 2)", nullptr));
        backgroundGalleryLabel->setText(QString());
        hashLabel_2->setText(QCoreApplication::translate("galleryPage", "hash (#)", nullptr));
        tildaLabel_2->setText(QCoreApplication::translate("galleryPage", "tilda (~)", nullptr));
        defaultAgentLabel_2->setText(QCoreApplication::translate("galleryPage", "default agent (1, 2)", nullptr));
        hashLabel_3->setText(QCoreApplication::translate("galleryPage", "other", nullptr));
        agentHashImage->setText(QString());
        agent2GalleryLabel->setText(QString());
        agentTildaImage->setText(QString());
        agentUser1Image->setText(QString());
        hashLabel_4->setText(QCoreApplication::translate("galleryPage", "other", nullptr));
        agentUser2Image->setText(QString());
        agent3GalleryLabel->setText(QString());
        agent4GalleryLabel->setText(QString());
        hashLabel_5->setText(QString());
        hashLabel_6->setText(QCoreApplication::translate("galleryPage", "other", nullptr));
        backgroundBoardLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class galleryPage: public Ui_galleryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GALLERYPAGE_H
