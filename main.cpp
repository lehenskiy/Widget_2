#include "view.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    try {
        QApplication a(argc, argv);
        View w;
        w.setWindowTitle("Counter");
        w.show();

        return a.exec();
    }
    catch (const std::bad_alloc&)
    {
        std::cout << "Error in allocate memory";
    };
}
