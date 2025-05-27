#ifndef CELL_H
#define CELL_H

#include <QString>

class cell
{
private:
    int id, agentId;
public:
    cell(int id, int agentID = -1){
        this->id = id;
        setAgent(agentID);
    };

    int getAgent(){
        return this->agentId;
    };

    QString info(){
        return QString("id: %1, agent: %2").arg(this->id).arg(this->agentId);
    };

    int getCellId(){
        return this->id;
    };

    void setAgent(int agentId){
        this->agentId = agentId;
    };

    void removeAgent(){
        this->agentId = -1;
    };
};

#endif // CELL_H
