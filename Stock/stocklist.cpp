#include "stocklist.h"
#include<QString>
#include <QMetaObject>
StockList* StockList::onlyInstance = NULL;
StockList::StockList()
{

}
StockList* StockList::getInstance()
{
    if (onlyInstance == nullptr)
        onlyInstance = new StockList();
    return onlyInstance;
}
void StockList::addStock(Stock* c)
{


    const QMetaObject*meta=c->metaObject();
    QString className=meta->className();

    if(className=="Confectionery")
         listC.append(c);

    if(className=="ReadingMaterial")
         listRM.append(c);
}

QList<Stock*> StockList::returnList(QString stockType) const
{
    if (stockType == "Confectionery")
        return listC;
    if (stockType == "ReadingMaterial")
        return listRM;
    return QList<Stock*>();
}

void StockList::deleteInstance()
{
    delete onlyInstance;
}

StockList::~StockList()
{
    qDeleteAll(listC);
    listC.clear();
    qDeleteAll(listRM);
    listRM.clear();
}
