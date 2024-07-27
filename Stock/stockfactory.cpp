#include "stockfactory.h"

StockFactory::StockFactory()
{

}

Stock*StockFactory::creatStock(  QString type,QString newItem,int newQuantity,QString newFrequency){

    //  the code was reffered from 2021 exam paper but modified


    if(type == "ReadingMaterial"){

        return new ReadingMaterial(newItem,newQuantity,newFrequency);
    } else if(type=="Confectionery"){

        return new Confectionery(newItem,newQuantity,newFrequency.toInt());
    }

    return nullptr;
}
