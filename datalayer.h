#ifndef DATALAYER_H
#define DATALAYER_H
#include <fstream>
#include <sstream>
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
    void addNew(ComputerScientist cs);
    int get_vector_size();
    vector<ComputerScientist> getVector();
    void read_from_file();
    void sort_vector();
    void change_sort_order(int n);
    ComputerScientist* findByName(string name);
    vector <ComputerScientist> findByYear(int year);
    void vectorToFile();
    void addToVec(ComputerScientist newGuy);


private:
    void sort_by_last();
    void sort_by_first();
    void sort_by_year_ascending();
    void sort_by_year_descending();

    vector<ComputerScientist> CSstorer5000;
    int current_sort;
};

#endif // DATALAYER_H
