#include "interface.h"
#include "servicelayer.h"

Interface::Interface()
{

}
void Interface::menu()//displays the initial menu for user
{
    int userChoice;
    cout << "Choose a number from the menu" << endl;
    cout << "1. Add new item to database" << endl;
    cout << "2. Display all info" << endl;
    cout << "3. Arrange list" << endl;
    cout << "4. Search for name" << endl;
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
    //ComputerScientist newGuy(firstName,lastName,gender,yob,yod);

    //call functions from datalayer to get info from user

}

void Interface::displayList()
{

    for(int i = 0; i < size(); i++)
    int vectorSize;
    vectorSize = sl.returnSizeOfVector();

    for(int i = 0; i < vectorSize; i++)
    {
        cout << i+1 << ":\t"
             << "Name: " << firstName << " " << lastName << "\t"
             << "Sex: " << gender << "\t"
             << "Year of birth: " << yob << "\t"
             << "Year of death: " << yod << endl;
    }

    cout << endl;
}

void Interface::selectOrder()
{
    int userChoice;
    cout << "Which order would you like to retrieve list items in?" << endl;
    cout << "1. Alphabetically by last name" << endl;
    cout << "2. Alphabetically by first name" << endl;
    cout << "3. By date of birth ascending" << endl;
    cout << "4. By date of birth descending" << endl;
    cin >> userChoice;
    switch (userChoice) {
    case 1:
        sl.sort_by_last();
    case 2:
        sl.sort_by_first();
        break;
    case 3:
        //sl.sort_by_year_ascending(); //kemur seinna, Birgir lætur inn heitið
        break;
    case 4:
      //  sl.sort_by_year_descending(); // kemur seinna, Birgir lætur inn heitið
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
    cout << "1. By name" << endl;
    cout << "2. By year" << endl;
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
