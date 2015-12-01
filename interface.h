#ifndef INTERFACE_H
#define INTERFACE_H

#include "ComputerScientist.h"
#include "servicelayer.h"

using namespace std;

class Interface
{
public:
    Interface();
    void menu();
    void addNew();
    void displayList();
    void selectOrder();
    void search();
    void printAll();
   /* void edit();
    void deleteInfo();*/

private:
    ServiceLayer sl;
};

#endif // INTERFACE_H
