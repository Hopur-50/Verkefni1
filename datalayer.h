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
    ComputerScientist findByName(string name);
    vector <ComputerScientist> findByYear(int year);
    void sort_by_first();

private:
    vector<ComputerScientist> CSstorer5000;
};

#endif // DATALAYER_H
