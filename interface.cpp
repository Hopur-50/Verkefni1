#include "interface.h"

Interface::Interface()
{

}
void Interface::menu()//displays the initial menu for user
{
    int userChoice;
    cout << "Choose a number from the menu" << endl;
    cout << "0. Add new item to database" << endl;
    cout << "1. Display all info" << endl;
    cout << "2. Arrange list" << endl;
    cout << "3. Search for name" << endl;
    //cout << "4. Edit" << endl;
    //cout << "5. Delete" << endl;
    cin >> userChoice;
    switch (userChoice) {
    case 0:
        addNew();
        break;
    case 1:
        displayList();
        break;
    case 2:
        selectOrder();
        break;
    case 3:
        search();
        break;
    default:
        cout << "Wrong input";
        break;
    }
}

void Interface::addNew()
{

    cout << "Please fill inn the fileds below\n";
    cout << "First name: ";
    cin >> firstName;
    cout << "Last name: ";
    cin >> lastName;
    cout << "Gender, m for male, f for female, o for other:";
    cin >> gender;
    cout << "Year of birth: ";
    cin >> yob;
    cout << "Year of death, if person is still alive enter 0\n";
    cin >> yod;
    ComputerScientist newGuy(firstName,lastName,gender,yob,yod);

    //call functions from datalayer to get info from user

}

void Interface::displayList()
{
    for(int i = 0; i < size(); i++)
    {
        cout << "vector items";
    }
    cout << endl;

}
void Interface::selectOrder()
{
    int userChoice;
    cout << "Which order would you like to retrieve list items in?" << endl;
    cout << "0. Alphabetically by last name" << endl;
    cout << "1. Alphabetically by first name" << endl;
    cout << "2. By date of birth ascending" << endl;
    cout << "3. By date of birth descending" << endl;
    cin >> userChoice;
    switch (userChoice) {
    case 0:
        sort_by_last();
    case 1:
        sort_by_last();
        break;
    case 2:
        //sort_by_dobAscending();
        break;
    case 3:
        //sort_by_dobDescending();
        break;
    default:
        break;
    }
}

void Interface::search()
{
    int userChoice;
    cout << "Search options" << endl;
    cout << "0. By name" << endl;
    cout << "1. By year" << endl;
    cin >> userChoice;
    switch (userChoice) {
    case 0:
        findByName();
        break;
    case 1:
        findByYear();
    default:
        break;
    }
}
