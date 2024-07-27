#include "stockmain.h"
#include "stockinput.h"
#include <QAction>
#include <QMenu>
#include <QVBoxLayout>
#include <QMenuBar>
#include <QMessageBox>

StockMain::StockMain(QWidget *parent)
    : QMainWindow{parent},displayTxt{new QPlainTextEdit}
{

    setupGUI();

    setupActions();
    setupMenus();

    connect(actAdd, &QAction::triggered, this, &StockMain::addCustomer);


}
void StockMain::setupGUI()
{
    //Setup layout

setCentralWidget(displayTxt);
}
void StockMain::addCustomer()
{
    StockInput  newCust;
    QTextStream cout(stdout);

    newCust.exec();




    if (newCust.result() == QDialog::Accepted) {
       //txtDisplay->append(newCust.getCustomer()->toString());


      //txtDisplay->append(newCust.getCustomer()->toString());
      displayTxt->appendPlainText(newCust.getStock()->toString());

      list->returnList(newCust.getStock()->toString());


    }
    else {
        emit displayMessage("Dialog closed - No data available");
    }

}
void StockMain::clearModel()
{
    int response;
    response = QMessageBox::question(this, "Clear model",
                                     "Are you sure you want to clear the model ?",
                                     QMessageBox::Yes | QMessageBox::Cancel);
    if (response == QMessageBox::Yes) {

        emit displayMessage("All data cleared from model");
    }
}
void StockMain::setupActions()
{

    actAdd = new QAction("Add");
    actView = new QAction( "ViewXML");

}
void StockMain::setupMenus()
{


    mnuEdit = menuBar()->addMenu("Edit");
    mnuEdit->addAction(actAdd);


    mnuView = menuBar()->addMenu("View");
    mnuView->addAction(actView);

}
