#include "stockinput.h"

#include <QApplication>
#include"stockmain.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StockMain w;
    w.show();
    return a.exec();
}
