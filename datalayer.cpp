#include "datalayer.h"

DataLayer::DataLayer()
{
    current_sort = LAST_NAME;
}

void DataLayer::read_from_file(){ //Allows the program to read from the file
    ifstream CSstream;
    CSstream.open("Computer_Scientists.txt");
    while(CSstream){
        string str;
        string first_name;
        string last_name;
        char sex;
        int yob;
        int yod;
        getline(CSstream, str, ';');
        stringstream ss(str);
        while ((ss >> first_name >> last_name >> sex >> yob >> yod))
        {
            ComputerScientist CStemp(first_name, last_name, sex, yob, yod);
            CSstorer5000.push_back(CStemp);
        }
    }
    sort_vector();
    CSstream.close();
}

void DataLayer::addNew(ComputerScientist cs)
{
    CSstorer5000.push_back(cs);
    sort_vector();
}

int DataLayer::get_vector_size()
{
    return CSstorer5000.size();

}
vector<ComputerScientist> DataLayer::getVector()
{
    return CSstorer5000;
}

void DataLayer::change_sort_order(int n)
{
    current_sort = n;
    sort_vector();
}

void DataLayer::sort_vector() //Allows the user to choose(in interface) from wich way he wants to sort from
{
    switch (current_sort)
    {
        case LAST_NAME:
            sort_by_last();
        break;

        case FIRST_NAME:
            sort_by_first();
        break;

        case YEAR_ASC:
            sort_by_year_ascending();
        break;

        case YEAR_DESC:
            sort_by_year_descending();
        break;

        default:
            sort_by_last();
        break;
    }
}

bool sort_last_name(ComputerScientist cs1, ComputerScientist cs2)
{
    string name1 = cs1.getLastName();
    string name2 = cs2.getLastName();
    if (name1.compare(name2) < 0) return true;
    return false;
}

void DataLayer::sort_by_last()
{
    sort(CSstorer5000.begin(), CSstorer5000.end(), sort_last_name);
}

bool sort_first_name(ComputerScientist cs1, ComputerScientist cs2)
{
    string name1 = cs1.getFirstName();
    string name2 = cs2.getFirstName();
    if (name1.compare(name2) < 0) return true;
    return false;
}

void DataLayer::sort_by_first()
{
    sort(CSstorer5000.begin(), CSstorer5000.end(), sort_first_name);
}

bool sort_year_asc(ComputerScientist cs1, ComputerScientist cs2)
{
    return cs1.getYearOfBirth() < cs2.getYearOfBirth();
}

void DataLayer::sort_by_year_ascending()
{
    sort(CSstorer5000.begin(), CSstorer5000.end(), sort_year_asc);
}

bool sort_year_desc(ComputerScientist cs1, ComputerScientist cs2)
{
    return cs2.getYearOfBirth() < cs1.getYearOfBirth();
}

void DataLayer::sort_by_year_descending()
{
    sort(CSstorer5000.begin(), CSstorer5000.end(), sort_year_desc);
}

ComputerScientist* DataLayer::findByName(string name) //Searches for the name that is input and returns as soon as it finds the same name
{
    for (unsigned int i = 0; i < CSstorer5000.size(); i++)
    {
        if(CSstorer5000[i].getFirstName() == name || CSstorer5000[i].getLastName() == name)
        {
             return &CSstorer5000[i];
        }
    }

    return 0;
}

vector <ComputerScientist> DataLayer::findByYear(int year) //Checks wich of the Computer Scientist were alive at what time
{
    vector <ComputerScientist> aliveThatYear; //A new vector so we can return only those thar are alive

    for (unsigned int i = 0; i < CSstorer5000.size(); i++)
    {
        if(CSstorer5000[i].getYearOfBirth() < year && CSstorer5000[i].getYearOfDeath() == 0)
        {
            aliveThatYear.push_back(CSstorer5000[i]);
        }

        if(CSstorer5000[i].getYearOfBirth() < year && CSstorer5000[i].getYearOfDeath() > year)
        {
            aliveThatYear.push_back(CSstorer5000[i]);
        }
    }

    return aliveThatYear;
}

void DataLayer::vectorToFile() //Function that prints what has been put in the vector to the file
{
    ofstream vectorStream;
    vectorStream.open("Computer_Scientists.txt", std::ofstream::trunc | std::ofstream::app);
    for(unsigned int i = 0; i < CSstorer5000.size(); i++)
    {
           vectorStream  << CSstorer5000[i].getFirstName()    << ";"
                         << CSstorer5000[i].getLastName()     << ";"
                         << CSstorer5000[i].getGender()       << ";"
                         << CSstorer5000[i].getYearOfBirth()  << ";"
                         << CSstorer5000[i].getYearOfDeath()  << endl;
    }
    vectorStream.close();
}

void DataLayer::addToVec(ComputerScientist newGuy)
{
    CSstorer5000.push_back(newGuy);
    sort_vector();
}
