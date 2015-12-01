#ifndef SERVICELAYER_H
#define SERVICELAYER_H

#include "datalayer.h"


class ServiceLayer
{

public:
    ServiceLayer();
    void addNew(ComputerScientist cs);
    vector <ComputerScientist> getCS();
    void read_from_file();
    ComputerScientist* findByName(string name);
    vector <ComputerScientist> findByYear(int year);
    int returnSizeOfVector();
    void change_sort_order(int n);
    void vectorToFile();

private:
    DataLayer dl;
};

#endif // SERVICELAYER_H

