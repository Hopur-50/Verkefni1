#ifndef SERVICELAYER_H
#define SERVICELAYER_H

#include "datalayer.h"


class ServiceLayer
{

public:
    ServiceLayer();
    /*ifstream openCSstream();
    void closeCSstream(ifstream &CSstream);*/
    void printAll();
    vector <ComputerScientist> getCS();
    void read_from_file();
    void sort_by_last();
    ComputerScientist* findByName(string name);
    vector <ComputerScientist> findByYear(int year);
    void sort_by_first();
    int returnSizeOfVector();
    void sort_by_year_ascending();
    void sort_by_year_descending();

private:
    DataLayer dl;


};

#endif // SERVICELAYER_H

