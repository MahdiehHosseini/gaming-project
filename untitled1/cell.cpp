#include "cell.h"

Cell::Cell(int id, Type cellType)
    : ID(id), CellType(cellType)
{
}

int Cell::getAgent() const {
    return this->AgentId;
}

int Cell::getCellId() const {
    return this->ID;
}

QString Cell::info() const {
    return QString("id: %1, agent: %2").arg(this->ID).arg(this->AgentId);
}

void Cell::setAgent(int agentId) {
    this->AgentId = agentId;
}

void Cell::removeAgent() {
    this->AgentId = -1;
}

QString Cell::getType() const {
    switch(this->CellType) {
    case Attacker: return "attacker";
    case Defender: return "defender";
    case Water: return "water";
    case Rock: return "rock";
    default: return "ground";
    }
}
