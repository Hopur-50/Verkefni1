#ifndef INTERFACE_H
#define INTERFACE_H
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    string firstName;
    string lastName;
    int yob;
    int yod;
    char gender;
    ServiceLayer sl;
};

#endif // INTERFACE_H
