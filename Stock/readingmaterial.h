#ifndef READINGMATERIAL_H
#define READINGMATERIAL_H
#include "stock.h"
#include<QMetaObject>

class ReadingMaterial :public Stock
{
public:
    ReadingMaterial();
    ReadingMaterial(QString newItem, int newQuantity, QString newFrequency);


     const QString &getFrequency() const;
    void setFrequency(const QString &newFrequency);


     QString toString() const;

private:
    QString frequency;
};

#endif // READINGMATERIAL_H
