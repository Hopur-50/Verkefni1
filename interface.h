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
<<<<<<< HEAD
    void printAll();
    void vectorToFile();
=======
    void displayVector(vector<ComputerScientist> vec);
    void printCS(ComputerScientist cs);
>>>>>>> 137df71d0253da2d45d3b96411e1f599043aaa43

private:
    ServiceLayer sl;
};

#endif // INTERFACE_H
