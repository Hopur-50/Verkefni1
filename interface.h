#ifndef INTERFACE_H
#define INTERFACE_H

#include "ComputerScientist.h"
#include "servicelayer.h"

using namespace std;

class Interface
{
public:
    Interface();
    void menu(int& userchoice);
    void addNew();
    void displayList();
    void selectOrder();
    void search();
    void vectorToFile();
    void displayVector(vector<ComputerScientist> vec);
    void printCS(ComputerScientist cs);

private:
    ServiceLayer sl;
};

#endif // INTERFACE_H
