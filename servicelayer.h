#ifndef SERVICELAYER_H
#define SERVICELAYER_H

#include "datalayer.h"


class ServiceLayer
{

public:
    ServiceLayer();
    void printAll();
    void read_from_file();
    ComputerScientist* findByName(string name);
    vector <ComputerScientist> findByYear(int year);
    int returnSizeOfVector();
    void change_sort_order(int n);

private:
    DataLayer dl;
};

#endif // SERVICELAYER_H

