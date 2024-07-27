#ifndef STOCKFACTORY_H
#define STOCKFACTORY_H
#include "stock.h"
#include "confectionery.h"
#include "readingmaterial.h"

#include <QObject>

class StockFactory
{
public:
    StockFactory();
     Stock*creatStock(QString type,QString newItem,int newQuantity,QString newFrequency);
};

#endif // STOCKFACTORY_H
