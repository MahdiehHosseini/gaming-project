#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>

namespace Ui {
class homePage;
}

class homePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit homePage(QWidget *parent = nullptr);
    ~homePage();

private slots:
    void on_galleryPushButton_clicked();
    void on_gamePushButton_clicked();

private:
    Ui::homePage *ui;
};

#endif // HOMEPAGE_H
