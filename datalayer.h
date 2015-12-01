#ifndef DATALAYER_H
#define DATALAYER_H
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "ComputerScientist.h"
using namespace std;

enum Sort {LAST_NAME, FIRST_NAME, YEAR_ASC, YEAR_DESC};

class DataLayer
{
public:
    DataLayer();
    ifstream openCSstream();
    void closeCSstream(ifstream CSstream);
    void printAll();
    void read_from_file(ifstream& CSstream);
    void sort_by_last();
    void sort_by_first();
    void sort_by_year_ascending();
    void sort_by_year_descending();
    ComputerScientist findByName(string name);
    vector <ComputerScientist> findByYear(int year);
    void vectorToFile();


private:
    vector<ComputerScientist> CSstorer5000;
};

#endif // DATALAYER_H
