#include "agent.h"

Agent::Agent(int id, int cellID, int HP, int mobility, int damage, int attackRange, Type agentType)
    : ID(id), CellID(cellID), HP(HP), Mobility(mobility), Damage(damage),
    AttackRange(attackRange), AgentType(agentType)
{
}

int Agent::getPosition() const {
    return this->CellID;
}

int Agent::getId() const {
    return this->ID;
}

int Agent::getHP() const {
    return this->HP;
}

int Agent::getMobility() const {
    return this->Mobility;
}

int Agent::getDamage() const {
    return this->Damage;
}

int Agent::getAttackRange() const {
    return this->AttackRange;
}

QString Agent::getType() const {
    switch(this->AgentType) {
    case WaterWalking: return "water-walking";
    case Grounded: return "grounded";
    case Flying: return "flying";
    case Floating: return "floating";
    default: return "unknown";
    }
}

QVariantMap Agent::parseNeighbors(const QString& filePath)
{
    QVariantMap result;
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning("Cannot open file");
        return result;
    }

    QTextStream in(&file);
    QString content = in.readAll();
    file.close();

    // حذف فاصله‌های اضافی
    content = content.simplified();

    // بررسی فرمت کلی
    if (!content.startsWith("{") || !content.endsWith("}")) {
        qWarning("Invalid format: missing braces");
        return result;
    }

    // حذف آکولادهای بیرونی
    content = content.mid(1, content.length() - 2).simplified();

    // تقسیم به جفت‌های کلید-مقدار
    QStringList pairs = content.split(",", Qt::SkipEmptyParts);

    for (const QString& pair : pairs) {
        QString trimmedPair = pair.simplified();

        // پیدا کردن موقعیت دو نقطه
        int colonPos = trimmedPair.indexOf(':');
        if (colonPos == -1) {
            qWarning() << "Invalid pair format:" << trimmedPair;
            continue;
        }

        QString keyStr = trimmedPair.left(colonPos).simplified();
        QString valueStr = trimmedPair.mid(colonPos + 1).simplified();

        // پردازش کلید
        bool keyOk;
        int key = keyStr.toInt(&keyOk);
        if (!keyOk) {
            qWarning() << "Invalid key:" << keyStr;
            continue;
        }

        // پردازش مقدار (آرایه‌های تودرتو)
        if (!valueStr.startsWith("[[") || !valueStr.endsWith("]]")) {
            qWarning() << "Invalid value format:" << valueStr;
            continue;
        }

        // حذف براکت‌های بیرونی
        valueStr = valueStr.mid(2, valueStr.length() - 4).simplified();

        QVariantList outerList;
        QStringList innerArrays = valueStr.split("],[", Qt::SkipEmptyParts);

        for (QString innerArray : innerArrays) {
            innerArray = innerArray.simplified();
            if (innerArray.startsWith("[")) innerArray = innerArray.mid(1);
            if (innerArray.endsWith("]")) innerArray = innerArray.left(innerArray.length() - 1);

            QVariantList innerList;
            QStringList numbers = innerArray.split(",", Qt::SkipEmptyParts);

            for (const QString& number : numbers) {
                bool numOk;
                int num = number.simplified().toInt(&numOk);
                if (numOk) {
                    innerList.append(num);
                }
            }

            outerList.append(innerList);
        }

        result.insert(QString::number(key), outerList);
    }

    return result;
}

void Agent::move(int newCellId) {
    this->CellID = newCellId;
}
