#ifndef GALLERYPAGE_H
#define GALLERYPAGE_H

#include <QMainWindow>

namespace Ui {
class galleryPage;
}

class galleryPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit galleryPage(QWidget *parent = nullptr);
    ~galleryPage();

private:
    Ui::galleryPage *ui;
};

#endif // GALLERYPAGE_H
