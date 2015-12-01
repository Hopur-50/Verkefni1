#include "interface.h"
#include "servicelayer.h"

Interface::Interface()
{

}
void Interface::menu()//displays the initial menu for user
{
    int userChoice;
    cout << "Choose a number from the menu" << endl;
    cout << "Choose 1 to add new item to database" << endl;
    cout << "Choose 2 to display all info" << endl;
    cout << "Choose 3 to arrange list" << endl;
    cout << "Choose 4 to search for a name" << endl;
            //cout << "4. Edit" << endl;
            //cout << "5. Delete" << endl;
    cin >> userChoice;
    switch (userChoice) {
    case 1:
        addNew();
        break;
    case 2:
        displayList();
        break;
    case 3:
        selectOrder();
        break;
    case 4:
        search();
        break;
    default:
        cout << "Wrong input";
        break;
    }
}

void Interface::addNew()
{

    cout << "Please fill inn the fields below\n";
    cout << "First name: ";
    cin >> firstName;
    cout << "Last name: ";
    cin >> lastName;
    cout << "Gender, m for male and f for female, o for other:";
    cin >> gender;
    cout << "Year of birth: ";
    cin >> yob;
    cout << "Year of death, if person is still alive enter 0\n";
    cin >> yod;
    //ComputerScientist newGuy(firstName,lastName,gender,yob,yod);

    //call functions from datalayer to get info from user

}

/*void Interface::displayList()
{
    for(int i = 0; i < size(); i++)
    {
        cout << "vector items";
    }
    cout << endl;

}*/

void Interface::selectOrder()
{
    int userChoice;
    cout << "Which order would you like to retrieve list items in?" << endl;
    cout << "Choose 1 for a list in alphabetical order by last name" << endl;
    cout << "Choose 2 for a list in alphabetical order by first name" << endl;
    cout << "Choose 3 for a list by date of birth in ascending order" << endl;
    cout << "Choose 4 for a list by date of birth in descending order" << endl;
    cin >> userChoice;
    switch (userChoice) {
    case 1:
        sl.sort_by_last();
    case 2:
        sl.sort_by_first();
        break;
    case 3:
        sl.sort_by_year_ascending(); //kemur seinna
        break;
    case 4:
        sl.sort_by_year_descending(); // kemur seinna
        break;
    default:
        break;
    }
}

void Interface::search()
{
    int userChoice,year;
    string name;
    cout << "Search options" << endl;
    cout << "Choose 1 to search by name" << endl;
    cout << "Choose 2 to search by year" << endl;
    cin >> userChoice;
    switch (userChoice) {
    case 1:
        sl.findByName(name);
        break;
    case 2:
       sl.findByYear(year);
    default:
        break;
    }
}

/*void Interface::printAll(){
    for(unsigned int i = 0; i < CSstorer5000.size(); i++){
        cout << i+1 << ":\t"
             << "Name: " << getFirstName() << " " << getLastName() << "\t"
             << "Sex: " << getGender() << "\t"
             << "Year of birth: " << getYearOfBirth() << "\t"
             << "Year of death: " << getYearOfDeath() << endl;
    }
}*/
