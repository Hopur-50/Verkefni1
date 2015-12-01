#include "servicelayer.h"
#include "ComputerScientist.h"
#include "datalayer.h"

ServiceLayer::ServiceLayer()
{

}

/*ifstream ServiceLayer::openCSstream()
{
    DataLayer.openCSstream();
}

void ServiceLayer::closeCSstream(ifstream& CSstream)
{
    DataLayer.closeCSstream(CSstream);
}*/

void ServiceLayer::read_from_file(DataLayer dl)
{
     dl.read_from_file();
}

void sort_by_last(DataLayer dl)
{
     dl.sort_by_last();
}

ComputerScientist ServiceLayer::findByName(DataLayer dl, string name)
{
     ComputerScientist nameguy(*dl.findByName(name)); //ætlaði að búa til copy ctor,
     return nameguy;                                  //fattaði síðan að þetta mun ekki
                                                      // virka, svo beil
}

vector <ComputerScientist> ServiceLayer::findByYear(DataLayer dl, int year)
{
     vector <ComputerScientist> year_vec(dl.findByYear(year));
     return year_vec;
}

void ServiceLayer::sort_by_first(DataLayer dl)
{
    dl.sort_by_first();
}

int ServiceLayer::returnSizeOfVector(DataLayer dl)
{
    return dl.get_vector_size();
}
