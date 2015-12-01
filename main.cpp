#include <QCoreApplication>
#include <iostream>
#include "interface.h"
#include "servicelayer.h"
#include <vector>

using namespace std;

int main()
{
    Interface message;
    message.menu();

    int number = 0;
    while(number != 1) {
        message.addNew();
        cout << "Press 1 to quit or 0 to continue"
        cin >> number;
    }
    return 0;
}

