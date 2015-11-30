#include "datalayer.h"

DataLayer::DataLayer()
{

}
//data
ifstream DataLayer::openCSstream(){
    ifstream CSstream;
    CSstream.open("Computer_Scientists.txt");
    return CSstream;
}
void DataLayer::closeCSstream(ifstream CSstream){
    CSstream.close();
}

void DataLayer::read_from_file(){

    while(openCSstream()){
        string str;
        string first_name;
        string last_name;
        char sex;
        int yob;
        int yod;
        getline(CSstream, str, ';');
        while (str >> first_name >> last_name >> sex >> yob >> yod)
        {
            ComputerScientist CStemp(first_name, last_name, sex, yob, yod);
            CSstorer5000.push_back(CStemp);
        }
        }
}

void DataLayer::sort_by_last()
{
    struct sort_last_name
    {
        bool operator() (ComputerScientist& cs1, ComputerScientist& cs2)
        {
            string name1 = cs1.getLastName();
            string name2 = cs2.getLastName();
            if (name1.compare(name2) < 0) return true;
            return false;
        }
    };
    sort(CSstorer5000.begin(), CSstorer5000.end(), sort_last_name);
}

void DataLayer::sort_by_first()
{
    struct sort_first_name
    {
        bool operator() (ComputerScientist& cs1, ComputerScientist& cs2)
        {
            string name1 = cs1.getFirstName();
            string name2 = cs2.getFirstName();
            if (name1.compare(name2) < 0) return true;
            return false;
        }
    };
    sort(CSstorer5000.begin(), CSstorer5000.end(), sort_first_name);
}

ComputerScientist DataLayer::findByName(string name)
{
    for (unsigned int i = 0; i < CSstorer5000.size(); i++)
    {
        if(CSstorer5000[i].getFirstName() == name || CSstorer5000[i].getLastName() == name)
        {
             return CSstorer5000[i];
        }
    }

    return NULL;
}

vector <ComputerScientist> DataLayer::findByYear(int year)
{
    vector <ComputerScientist> aliveThatYear;

    for (unsigned int i = 0; i < CSstorer5000.size(); i++)
    {
        if(CSstorer5000[i].getYearOfBirth() < year && CSstorer5000[i].getYearOfDeath() > year)
        {
            aliveThatYear.push_back(CSstorer5000[i]);
        }
    }

    return aliveThatYear;
}
