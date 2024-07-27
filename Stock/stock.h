#ifndef STOCK_H
#define STOCK_H

#include <QObject>
#include <QString>
#include <QStringList>

class Stock :public QObject
{
       Q_OBJECT
public:
    Stock();
    Stock(QString newItem,int newQuantity);


    const QString &getItem() const;
    void setItem(const QString &newItem);

    int getQuantity() const;
    void setQuantity(int newQuantity);

     QString  toString()const;

protected:

    QString item;
    int quantity;

};

#endif // STOCK_H
