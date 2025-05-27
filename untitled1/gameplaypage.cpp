#include "gameplaypage.h"
#include "ui_gameplaypage.h"

#include "cell.h"
#include "board.h"

gameplayPage::gameplayPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gameplayPage)
{
    ui->setupUi(this);

    ui->agentHash2->setEnabled(false);
    ui->agent2->setEnabled(false);
    ui->agentTilda2->setEnabled(false);

    render();

}

QVector<cell> cells;

void gameplayPage::render() {

    cells.clear();

    for (const QVariantMap &cellData : board::getInstance()->getData()) {
        int cellId = cellData["cellID"].toInt();
        int agentId = cellData["agentID"].toInt();

        cells.append(cell(cellId, agentId));
    }

    for (cell &cell : cells) {
        QString buttonName = "cell" + QString::number(cell.getCellId());
        QPushButton *button = this->findChild<QPushButton*>(buttonName);
        connect(button, &QPushButton::clicked, this, &gameplayPage::on_anyCell_clicked);
        if(cell.getAgent() != -1){
            button->setIcon(QIcon(QString(":/images/agent%1.png").arg(cell.getAgent())));
        }
    }
};

int currentAgent = -1;

int currentCell = 0;


void setAgent(int newAgentID){
    currentAgent = newAgentID;
}

// setting agent
void gameplayPage::on_agentHash1_clicked()
{
    setAgent(3);
}

void gameplayPage::on_agentTilda1_clicked()
{
    setAgent(4);
}

void gameplayPage::on_agent1_clicked()
{
    setAgent(1);
}

void gameplayPage::on_agent2_clicked()
{
    setAgent(2);
}

void gameplayPage::on_agentHash2_clicked()
{
    setAgent(3);
}

void gameplayPage::on_agentTilda2_clicked()
{
    setAgent(4);
}

bool userTurn = false;

void gameplayPage::setCell(int newCellID){
    if(currentAgent != -1){
        currentCell = newCellID;
        ui->gameError->setText("");
        QString buttonName = "cell" + QString::number(newCellID);
        QPushButton *button = this->findChild<QPushButton *>(buttonName);
        button->setIcon(QIcon(QString(":/images/agent%1.png").arg(currentAgent)));

        ui->agentHash2->setEnabled(!userTurn);
        ui->agent2->setEnabled(!userTurn);
        ui->agentTilda2->setEnabled(!userTurn);

        ui->agentHash1->setEnabled(userTurn);
        ui->agent1->setEnabled(userTurn);
        ui->agentTilda1->setEnabled(userTurn);

        userTurn = !userTurn;
        currentAgent = -1;
    } else {
        ui->gameError->setText("please choose an agent");
    }
};

//setting cell
void gameplayPage::on_anyCell_clicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button)
    {
        QString name = button->objectName();
        name.remove("cell");
        int cellId = name.toInt();
        setCell(cellId);
    }
}

gameplayPage::~gameplayPage()
{
    delete ui;
}

