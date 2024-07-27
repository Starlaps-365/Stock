#include "stock.h"

Stock::Stock()
{

}

Stock::Stock(QString newItem,int newQuantity){


}
const QString &Stock::getItem() const
{
    return item;
}

void Stock::setItem(const QString &newItem)
{
    item = newItem;
}

int Stock::getQuantity() const
{
    return quantity;
}

void Stock::setQuantity(int newQuantity)
{
    quantity = newQuantity;
}

QString Stock::toString()const{
    return QString("item%1").arg(item +QString::number(quantity));
}
