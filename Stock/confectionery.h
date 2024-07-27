#ifndef CONFECTIONERY_H
#define CONFECTIONERY_H
#include <QObject>
#include "stock.h"


class Confectionery :public Stock
{
      Q_OBJECT
public:
    Confectionery();
     Confectionery(QString newItem,int newQuantity,int newWeight);

    int getWeight() const;
    void setWeight(int newWeight);


   const  QString toString()const;
private :
    int weight;


};

#endif // CONFECTIONERY_H
