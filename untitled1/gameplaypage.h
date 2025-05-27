#ifndef GAMEPLAYPAGE_H
#define GAMEPLAYPAGE_H

#include <QMainWindow>

namespace Ui {
class gameplayPage;
}

class gameplayPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit gameplayPage(QWidget *parent = nullptr);
    void render();
    void setCell(int newCellID);
    ~gameplayPage();

private slots:
    void on_agentHash1_clicked();
    void on_agentTilda1_clicked();
    void on_agent1_clicked();
    void on_agent2_clicked();
    void on_agentHash2_clicked();
    void on_agentTilda2_clicked();
    void on_anyCell_clicked();

private:
    Ui::gameplayPage *ui;
};

#endif // GAMEPLAYPAGE_H
