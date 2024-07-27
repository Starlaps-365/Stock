#include "confectionery.h"

Confectionery::Confectionery()
{

}

Confectionery::Confectionery(QString newItem, int newQuantity, int newWeight)
{
 Confectionery::Stock(newItem,newQuantity);
 weight=newWeight;
}

int Confectionery::getWeight() const
{
    return weight;
}

void Confectionery::setWeight(int newWeight)
{
    weight = newWeight;
}

const QString Confectionery::toString()const{
    return QString("Confectionery %1,Quantity %2,Weight %3")
             .arg(item +QString::number(quantity) + QString::number(weight));

}
