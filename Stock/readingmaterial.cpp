#include "readingmaterial.h"

ReadingMaterial::ReadingMaterial()
{

}

ReadingMaterial::ReadingMaterial(QString newItem, int newQuantity, QString newFrequency)
{
    ReadingMaterial::Stock(newItem,newQuantity);
    frequency=newFrequency;
}

const QString &ReadingMaterial::getFrequency() const
{
    return frequency;
}

void ReadingMaterial::setFrequency(const QString &newFrequency)
{
    frequency = newFrequency;
}

 QString ReadingMaterial::toString() const
{
    return (("Confectionery: " + item + ", Quantity: " + QString::number(quantity) + ", Weight: " + frequency));
}
