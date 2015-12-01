#ifndef SERVICELAYER_H
#define SERVICELAYER_H
#include "datalayer.h"


class ServiceLayer
{

public:
    ServiceLayer();
    /*ifstream openCSstream();
    void closeCSstream(ifstream &CSstream);*/
    void printAll(DataLayer dl);
    void read_from_file(DataLayer dl);
    void sort_by_last(DataLayer dl);
    ComputerScientist findByName(DataLayer dl, string name);
    vector <ComputerScientist> findByYear(DataLayer dl, int year);
    void sort_by_first(DataLayer dl);
    int returnSizeOfVector(DataLayer dl);
private:



};

#endif // SERVICELAYER_H

