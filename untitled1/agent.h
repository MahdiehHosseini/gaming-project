#ifndef AGENT_H
#define AGENT_H

#include <QObject>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>
#include <QVariant>
#include <QVariantMap>
#include <QVariantList>

class Agent : public QObject
{
    Q_OBJECT

public:
    enum Type {
        WaterWalking,
        Grounded,
        Flying,
        Floating
    };

    Agent(int id, int cellID, int HP, int mobility, int damage, int attackRange, Type agentType);

    int getPosition() const;
    int getId() const;
    int getHP() const;
    int getMobility() const;
    int getDamage() const;
    int getAttackRange() const;
    QString getType() const;
    QVariantMap parseNeighbors(const QString& filePath);

    void move(int newCellId);

private:
    int CellID;
    int HP;
    int Mobility;
    int Damage;
    int AttackRange;
    int ID;
    Type AgentType;
};

#endif // AGENT_H
