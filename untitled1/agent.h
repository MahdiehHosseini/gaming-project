#ifndef AGENT_H
#define AGENT_H

#include <Qobject>

class agent : public QObject
{
    Q_OBJECT
private:
    int cellID, id = -1;

public:
    agent(int id, int cellID){
        this->id = id;
    };

    int getPosition() {
        return this->cellID;
    };

    int getId() {
        return this->id;
    };

    void move(int newCellId){
        this->cellID = newCellId;
    };
};

#endif // AGENT_H
