#include "servicelayer.h"
#include "ComputerScientist.h"

ServiceLayer::ServiceLayer()
{

}

ifstream ServiceLayer::openCSstream()
{
    DataLayer.openCSstream();
}

void ServiceLayer::closeCSstream(ifstream CSstream)
{
    DataLayer.closeCSstream(CSstream);
}

void ServiceLayer::read_from_file()
{
     DataLayer.read_from_file();
}

void sort_by_last()
{
     DataLayer.sort_by_last();
}

ComputerScientist ServiceLayer::findByName(string name)
{
     DataLayer.findByName(name);
}

vector <ComputerScientist> ServiceLayer::findByYear(int year)
{
     DataLayer.findByYear(year);
}

void ServiceLayer::sort_by_first()
{
    DataLayer.sort_by_first();
}

int ServiceLayer::returnSizeOfVector()
{
    return CSstorer5000.size();
}
