#include "datalayer.h"

DataLayer::DataLayer()
{
    current_sort = LAST_NAME;
}
//data
/*ifstream* DataLayer::openCSstream(){
    ifstream CSstream;
    CSstream.open("Computer_Scientists.txt");
    return &CSstream;
}

void DataLayer::closeCSstream(ifstream& CSstream){
    CSstream.close();
}*/

void DataLayer::read_from_file(){
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
    CSstream.open("Computer_Scientists.txt");
}
int get_vector_size()
{
    return CSstorer5000.size();
}

void DataLayer::sort_vector()
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

ComputerScientist* DataLayer::findByName(string name)
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

/*void DataLayer::vectorToFile()
{
    string firstName;
           firstName = getFirstName();
           char getGender();
           int getYearOfBirth();
           int getYearOfDeath();

   for(int i = 0; i < CSstorer5000.size(); i++)
   {
         CSstorer5000.push_back();                  //Á eftir að vinna fullt með
         CSstorer5000[i].push_back(getLastName());
         CSstorer5000[i].push_back(getGender()); //Búa til getGender fall
         CSstorer5000[i].push_back(getYearOfBirth());
         CSstorer5000[i].push_back(getYearOfDeath());
   }

   // vector<ComputerScientist> CSstorer5000;
    ofstream output_file("./example.txt");
    ostream_iterator<ComputerScientist> output_iterator(output_file, "\n");
    copy(CSstorer5000.begin(), CSstorer5000.end(), output_iterator);
}*/
