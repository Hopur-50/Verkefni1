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

ComputerScientist* ServiceLayer::findByName(string name)
{
     return dl.findByName(name);
}

vector <ComputerScientist> ServiceLayer::findByYear(int year)
{
     return dl.findByYear(year);
}

int ServiceLayer::returnSizeOfVector()
{
    return dl.get_vector_size();
}

void ServiceLayer::change_sort_order(int n)
{
    dl.change_sort_order(n);
}
