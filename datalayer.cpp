#include "datalayer.h"

DataLayer::DataLayer()
{

}

ifstream DataLayer::openCSstream(){
    ifstream CSstream;
    CSstream.open("Computer_Scientists.txt");
    return CSstream;
}
void DataLayer::closeCSstream(ifstream CSstream){
    CSstream.close();
}
void DataLayer::printAll(){
    for(unsigned int i=0; i<CSstorer5000.size(); i++){
        cout << i+1 << ":\t"
             << "Name: " << CSstorer5000[i].getFirstName() << " " << CSstorer5000[i].getLastName() << "\t"
             << "Sex: " << CSstorer5000[i].getGender() << "\t"
             << "Year of birth: " << CSstorer5000[i].getYearOfBirth() << "\t"
             << "Year of death: " << CSstorer5000[i].getYearOfDeath() << endl;
    }
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

<<<<<<< HEAD
void DataLayer::addNewInfo()
{
    for (int i = 0; i < 1; i++)
    {
        cout << "Name: ";
        cin  >> CSstorer5000[i].first_name;
             >> CSstorer5000[i].last_name;
        cout >> "Sex: ";
        cin  >> CSstorer5000[i].sex;
        cout << "Year of birth: ";
        cin  >> CSstorer5000[i].year_of_birth;
        cout << "Year of death: (write 0 if still alive)";
        cin  >> CSstorer5000[i].year_of_death;
        cout << endl;
    }

}






=======
void DataLayer::sort_by_last()
{
    struct less_than_last_name
    {
        bool operator() (ComputerScientist& cs1, ComputerScientist& cs2)
        {
            string name1 = cs1.getLastName();
            string name2 = cs2.getLastName();
            if (name1.compare(name2) < 0) return true;
            return false;
        }
    };
}
>>>>>>> cd7d8236ad8278108addb272795e282b2d77ce8f
