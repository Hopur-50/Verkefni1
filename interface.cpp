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
    cout << "1 to add new item to database" << endl;
    cout << "2 to display all info" << endl;
    cout << "3 to arrange list" << endl;
    cout << "4 to search for a name" << endl;
    cout << "5 to quit the program" << endl;

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
    cout << "Gender?" << endl;
    cout << "m for male" << endl;
    cout << "f for female" << endl;
    cout << "o for other" << endl;
    cin >> gender;
    cout << "Year of birth: ";
    cin >> yob;
    cout << "Year of death, if the person is still alive enter 0\n";

     ComputerScientist newGuy(firstName,lastName,gender,yob,yod);
    //call functions from datalayer to get info from user

}


void Interface::displayList()
{
    int vectorSize;
    vectorSize = sl.returnSizeOfVector();

    for(int i = 0; i < vectorSize; i++)
    {
        vector<ComputerScientist> tempVec=sl.getCS();
        cout << i+1 << ":\t"
             << "Name: " << tempVec[i].getFirstName() << " " << tempVec[i].getLastName() << "\t"
             << "Sex: " << tempVec[i].getGender() << "\t"
             << "Year of birth: " << tempVec[i].getYearOfBirth() << "\t"
             << "Year of death: " << tempVec[i].getYearOfDeath() << endl;
    }

    cout << endl;
}


void Interface::selectOrder()
{
    int userChoice;
    cout << "Which order would you like to retrieve list items in?" << endl;
    cout << "Choose one of the following numbers:" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "1 for a list of last names in alphabetical order" << endl;
    cout << "2 for a list of first names in alphabetical order" << endl;
    cout << "3 for a list sorted by date of birth in ascending order" << endl;
    cout << "4 for a list sorted by date of birth in descending order" << endl;
    cin >> userChoice;
    if(userChoice > 0 && userChoice < 5) sl.change_sort_order(userChoice);
    else {
        cout << "Wrong input";
        selectOrder();
    }
}

void Interface::search()
{
    int userChoice,year;
    string name;
    cout << "Search options" << endl;
    cout << "Choose one of the following numbers:" << endl;
    cout << "------------------------------------" << endl;
    cout << "1 to search by name" << endl;
    cout << "2 to check whom of the computer scientist were alive that year" << endl;
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
