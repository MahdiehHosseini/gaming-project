#include "gameplaypage.h"
#include "ui_gameplaypage.h"

#include "cell.h"
#include "board.h"

gameplayPage::gameplayPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gameplayPage)
{
    ui->setupUi(this);

    signalMapper = new QSignalMapper(this);
    connect(ui->angus, SIGNAL(clicked()), signalMapper, SLOT(map()));
    connect(ui->billy, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->angus, "angus");
    signalMapper->setMapping(ui->billy, "billy");
    connect(signalMapper, SIGNAL(mappedString(const QString&)),
            this, SLOT(onAgentButtonClicked(const QString&)));

    render();

}

QVector<Cell> cells;

void gameplayPage::render() {

    cells.clear();

    for (const QVariantMap &cellData : Board::getInstance()->getData()) {
        int cellId = cellData["CellID"].toInt();
        Cell::Type cellType = static_cast<Cell::Type>(cellData["CellType"].value<int>());

        cells.append(Cell(cellId, cellType));
    }

    for (Cell &cell : cells) {
        QString buttonName = "cell" + QString::number(cell.getCellId());
        QPushButton *button = this->findChild<QPushButton*>(buttonName);
        connect(button, &QPushButton::clicked, this, &gameplayPage::on_anyCell_clicked);
        if(cell.getType() != "ground"){
            QString iconPath = QString(":/images/cell-%1.png").arg(cell.getType());
            button->setIcon(QIcon(iconPath));
            button->setProperty("iconPath", iconPath);
        }
    }
};

QString currentAgent = "";
int currentCell = 0;


void setAgent(QString newAgent){
    currentAgent = newAgent;
}

// setting agent
void gameplayPage::onAgentButtonClicked(const QString& agentName)
{
    setAgent(agentName);
}

bool attackerTurn = false;
bool isFirstMove = true;

void gameplayPage::setCell(int newCellID){
    if(currentAgent != ""){
        QString buttonName = "cell" + QString::number(newCellID);
        QPushButton *button = this->findChild<QPushButton *>(buttonName);
        ui->gameError->setText("");

        QIcon icon = button->icon();
        QString iconPath = button->property("iconPath").toString();

        if (iconPath.contains("rock")) {
            ui->gameError->setText("this agent can not be placed on rock cell");
            return;
        }

        if(isFirstMove) {
            if(attackerTurn && !iconPath.contains("attacker")) {
                ui->gameError->setText("please place the agent on attacker cells");
                return;
            }
            if(!attackerTurn && !iconPath.contains("defender")) {
                ui->gameError->setText("please place the agent on defender cells");
                return;
            }
        }

        currentCell = newCellID;
        QString newIconPath = QString(":/images/%1.jpg").arg(currentAgent);
        button->setIcon(QIcon(newIconPath));
        button->setProperty("iconPath", newIconPath);

        if(isFirstMove) {
            if(attackerTurn) {
                static int player1Placed = 0;
                player1Placed++;
                if(player1Placed >= 6) {
                    attackerTurn = false;
                }
            } else {
                static int player2Placed = 0;
                player2Placed++;
                if(player2Placed >= 6) {
                    isFirstMove = false;
                }
            }
        } else {
            attackerTurn = !attackerTurn;
        }

        ui->billy->setEnabled(attackerTurn);
        ui->angus->setEnabled(attackerTurn);
        currentAgent = "";
    } else {
        ui->gameError->setText("please choose an agent first");
    }
}


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

