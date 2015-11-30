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
    for(int i=0; i<CSstorer5000.size(); i++){
        cout << i+1 << ":\t"
             << "Name: " << CSstorer5000[i].first_name << " " << CSstorer5000[i].last_name << "\t"
             << "Sex: " << CSstorer5000[i].sex << "\t"
             << "Year of birth: " << CSstorer5000[i].year_of_birth << "\t"
             << "Year of death: " << CSstorer5000[i].year_of_death << endl;
    }
}

void DataLayer::read_from_file(){

    while(CSstream){
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

