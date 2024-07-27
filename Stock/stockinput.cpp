#include "stockinput.h"
#include "stockfactory.h"
#include <QVBoxLayout>
#include<QHBoxLayout>
#include <QPushButton>
#include <QTextEdit>
#include <QLineEdit>
#include <QGridLayout>
#include <QComboBox>
#include <QDoubleSpinBox>
#include <QLabel>
#include<QSpinBox>
#include<QRadioButton>

StockInput::StockInput(QWidget *parent)
    : QDialog(parent)    , btnConfec{new QRadioButton("Confectionery")},btnRead{new QRadioButton("Reading Material")}
    ,edtItem{new QLineEdit},edtNumber{new QSpinBox},edtWeight{new QSpinBox}
    ,edtFrequency{new QLineEdit},btnData{new QPushButton("\t \tProcess data")}
{
    setupGUI();

    connect(edtItem, &QLineEdit::textChanged, this, &StockInput::checkInputs);
    connect(edtNumber,&QSpinBox::valueChanged,this,&StockInput::checkInputs);
    connect(edtWeight,&QSpinBox::valueChanged,this,&StockInput::checkInputs);
    connect(btnData, &QPushButton::clicked, this, &StockInput::processInput);
    connect(btnData, &QPushButton::clicked, this, &StockInput::accept);
}

StockInput::~StockInput()
{
}

void StockInput::processInput()
{

  //stock->setItem(edtItem->text());
    /*customer->setQuantity(edtNumber->value());
    customer->setAge(edtWeight->value()); */

    StockFactory sf;
    if(btnConfec->metaObject()){
       stock=sf.creatStock("Confectionery",edtItem->text(),edtNumber->value(),edtWeight->text());
    }else if(btnRead->metaObject()){

        stock=sf.creatStock("Reading Material",edtItem->text(),edtNumber->value(),btnData->text());

    }

}
void StockInput::checkInputs()
{
    if(btnConfec->isCheckable() && btnRead->isCheckable()
            &&edtItem->hasAcceptableInput() && edtNumber->hasAcceptableInput()
            &&edtWeight->hasAcceptableInput() && edtFrequency->hasAcceptableInput()){

        btnData->setEnabled(true);
    }else{

        btnData->setEnabled(false);
    }

}

Stock* StockInput::getStock() const
{
    return stock;
}
void StockInput::setupGUI()
{

   QGridLayout*layout=new QGridLayout(this);



   QLabel*lblData{new QLabel("Complete the required data")};
   QLabel*lblType{new QLabel("Stock type")};

   QLabel*lblNameItem{new QLabel("Name of Item")};
   QLabel*lblNumberItems{new QLabel("Number of Items")};

   QLabel*lblConfectionery{new QLabel("Confectionery")};
   QLabel*lblReadingMaterial{new QLabel("Reading Material")};

   QLabel*lblItemWeight{new QLabel("item Weight")};
   QLabel*lblItemFrequency{new QLabel("Item Frequency")};


   // Setup Layout

   layout->addWidget(lblData,0,0);

   layout->addWidget(btnConfec,1,1);

   layout->addWidget(lblType,2,0);

   layout->addWidget(btnRead,3,1);


  layout->addWidget(lblNameItem,4,0);
   layout->addWidget(edtItem,4,1);

   layout->addWidget(lblNumberItems,5,0);
   layout->addWidget(edtNumber,5,1);

  layout->addWidget(lblConfectionery,6,0);
   layout->addWidget(lblReadingMaterial,6,1);

   layout->addWidget(lblItemWeight,7,0);
   layout->addWidget(lblItemFrequency,7,1);

   layout->addWidget(edtWeight,8,0);
   layout->addWidget(edtFrequency,8,1);

   //layout->addWidget(btnData,9,0,1,1);
    layout->addWidget(btnData);

   this-> setLayout(layout);


}


