#include "interface.h"

Interface::Interface()
{
    vectorToFile();
}

void Interface::menu(int& userChoice)//displays the initial menu for user
{
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
    case 5:
        break;
    default:
        cout << "Wrong input";
        break;
    }
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
    cin >> yod;

    ComputerScientist newGuy(firstName,lastName,gender,yob,yod);
    sl.addNew(newGuy);
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

void Interface::displayVector(vector<ComputerScientist> vec)
{
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        cout << i+1 << ":\n";
        printCS(vec[i]);
    }
}

void Interface::printCS(ComputerScientist cs)
{
    cout << "Name: " << cs.getFirstName() << " " << cs.getLastName() << "\t"
         << "Sex: " << cs.getGender() << "\t"
         << "Year of birth: " << cs.getYearOfBirth() << "\t"
         << "Year of death: " << cs.getYearOfDeath() << endl;
}


void Interface::selectOrder()
{
    int userChoice2;
    cout << "Which order would you like to retrieve list items in?" << endl;
    cout << "Choose one of the following numbers:" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "1 for a list of last names in alphabetical order" << endl;
    cout << "2 for a list of first names in alphabetical order" << endl;
    cout << "3 for a list sorted by date of birth in ascending order" << endl;
    cout << "4 for a list sorted by date of birth in descending order" << endl;
    cin >> userChoice2;
    if(userChoice2 > 0 && userChoice2 < 5) sl.change_sort_order(userChoice2);
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
void Interface::vectorToFile()
{
    sl.vectorToFile();
}
