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

void ServiceLayer::read_from_file()
{
     dl.read_from_file();
}

void ServiceLayer::sort_by_last()
{
     dl.sort_by_last();
}

ComputerScientist* ServiceLayer::findByName(string name)
{
     return dl.findByName(name);
}

vector <ComputerScientist> ServiceLayer::findByYear(int year)
{
     return dl.findByYear(year);
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
