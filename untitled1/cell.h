#ifndef CELL_H
#define CELL_H

#include <QString>

class Cell
{
public:
    enum Type {
        Attacker,
        Defender,
        Water,
        Rock,
        Ground
    };

    Cell(int id, Type cellType = Ground);

    int getAgent() const;
    int getCellId() const;
    QString info() const;
    QString getType() const;

    void setAgent(int agentId);
    void removeAgent();

private:
    int ID;
    int AgentId;
    Type CellType;
};

#endif // CELL_H
