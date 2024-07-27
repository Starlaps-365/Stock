#ifndef STOCKLIST_H
#define STOCKLIST_H
#include "confectionery.h"
#include "readingmaterial.h"


class StockList
{

public:

    static StockList* getInstance();
    static void deleteInstance();

    void addStock(Stock* c);

    QList<Stock*> returnList(QString stockType) const;




private:
    StockList();
    ~StockList();

    static StockList* onlyInstance;

    QList<Stock*> listC;
    QList<Stock*> listRM;

};

#endif // STOCKLIST_H
