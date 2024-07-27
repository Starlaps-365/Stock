#ifndef STOCKMAIN_H
#define STOCKMAIN_H

#include <QMainWindow>
#include <QWidget>
#include <QListWidget>
#include<QPlainTextEdit>
#include <QTextEdit>
#include "stocklist.h"
class QPushButton;
class CustView;
class QAction;
class QMenu;
class QToolBar;


class StockMain : public QMainWindow
{
    Q_OBJECT
public:
    explicit StockMain(QWidget *parent = nullptr);

signals:
    void displayMessage(QString);

public slots:
    void addCustomer();
    void clearModel();

private:
    void setupGUI();

    StockList*list;


    QPlainTextEdit*displayTxt;



    void setupActions();
    void setupMenus();
    void setupToolbar();




    QAction *actAdd;
    QAction *actView;



    QMenu *mnuEdit;
    QMenu *mnuView;
    QMenu *mnuReport;
    QMenu *mnuHelp;

    QToolBar *toolbar;

};

#endif // STOCKMAIN_H
