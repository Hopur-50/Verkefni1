#ifndef DATALAYER_H
#define DATALAYER_H
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "ComputerScientist.h"
using namespace std;


class DataLayer
{
public:
    DataLayer();
    ifstream openCSstream();
    void closeCSstream(ifstream CSstream);
    void printAll();
    void read_from_file();
    void sort_by_last();
    void sort_by_first();
    void sort_by_year_ascending();
    void sort_by_year_descending();

private:
    vector<ComputerScientist> CSstorer5000;
};

#endif // DATALAYER_H
