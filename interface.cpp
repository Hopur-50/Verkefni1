#include "interface.h"
#include "servicelayer.h"

Interface::Interface()
{

}
void Interface::menu()//displays the initial menu for user
{
    int userChoice;
    cout << "Choose a number from the menu" << endl;
    cout << "-----------------------------" << endl;
    cout << "Choose 1 to add new item to database" << endl;
    cout << "Choose 2 to display all info" << endl;
    cout << "Choose 3 to arrange list" << endl;
    cout << "Choose 4 to search for a name" << endl;
    cout << "Choose 5 to quit the program" << endl;

    cin >> userChoice;
    switch (userChoice) {
    case 1:
        addNew();
        menu();
    case 2:
        displayList();
        menu();
    case 3:
        selectOrder();
        menu();
    case 4:
        search();
        menu();
    case 5:
        break;
    default:
        cout << "Wrong input";
        menu();
    }
    //bæta við vectortofile
}

void Interface::addNew()
{
    string firstName, lastName;
    char gender;
    int yob, yod;
    cout << "Please fill in the fields below\n";
    cout << "First name: ";
        cin >> firstName;
    cout << "Last name: ";
        cin >> lastName;
    cout << "What is your gender?" << endl;
    cout << "m for male" << endl;
    cout << "f for female" << endl;
    cout << "o for other" << endl;
        cin >> gender;
    cout << "Year of birth: ";
        cin >> yob;
    cout << "Year of death, if the person is still alive enter 0\n";
        cin >> yod;
    //ComputerScientist newGuy(firstName,lastName,gender,yob,yod);

    //call functions from datalayer to get info from user

}

void Interface::displayList()
{
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
    cout << "-----------------------------------------------------" << endl;
    cout << "Choose 1 for a list of last names in alphabetical order" << endl;
    cout << "Choose 2 for a list of first names in alphabetical order" << endl;
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
        sl.sort_by_year_ascending();
        break;
    case 4:
        sl.sort_by_year_descending();
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
    cout << "---------------" << endl;
    cout << "Choose 1 to search by name" << endl;
    cout << "Choose 2 to search by year" << endl;
    cin >> userChoice;
    switch (userChoice) {
    case 1:
        cout << "What name would you like to search?" << endl;
        cin >> name;
        sl.findByName(name);
        break;
    case 2:
        cout << "What year would you like to search?" << endl;
        cin >> year;
        sl.findByYear(year);
    default:
        break;
    }
}
