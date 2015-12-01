#include "servicelayer.h"
#include "ComputerScientist.h"
#include "datalayer.h"

ServiceLayer::ServiceLayer()
{

}

void ServiceLayer::read_from_file()
{
     dl.read_from_file();
}

void ServiceLayer::sort_by_last()
{
     dl.sort_by_last();
}

ComputerScientist ServiceLayer::findByName(string name)
{
     ComputerScientist nameguy(*dl.findByName(name)); //ætlaði að búa til copy ctor,
     return nameguy;                                  //fattaði síðan að þetta mun ekki
                                                      // virka, svo beil
}

vector <ComputerScientist> ServiceLayer::findByYear(int year)
{
     vector <ComputerScientist> year_vec(dl.findByYear(year));
     return year_vec;
}

void ServiceLayer::sort_by_first()
{
    dl.sort_by_first();
}

int ServiceLayer::returnSizeOfVector()
{
    return dl.get_vector_size();
}

void ServiceLayer::sort_by_year_ascending()
{
    dl.sort_by_year_ascending();
}

void ServiceLayer::sort_by_year_descending()
{
    dl.sort_by_year_descending();
}
