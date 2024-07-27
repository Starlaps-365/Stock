#ifndef STOCKINPUT_H
#define STOCKINPUT_H

#include <QDialog>
#include <QObject>
#include<QSpinBox>
#include "stock.h"

class QPushButton;
class QLineEdit;
class QTextEdit;
class QComboBox;
class QRadioButton;

class StockInput : public QDialog
{
    Q_OBJECT

public:
    StockInput(QWidget *parent = nullptr);
   ~StockInput();


    Stock*getStock()const;

private slots:
    void processInput();
    void checkInputs();

 private:
    void setupGUI();

    Stock*stock;

    QRadioButton*btnConfec;
    QRadioButton*btnRead;
    QLineEdit*edtItem;
    QSpinBox*edtNumber;
    QSpinBox*edtWeight;
    QLineEdit*edtFrequency;
    QPushButton*btnData;

};
#endif // STOCKINPUT_H
