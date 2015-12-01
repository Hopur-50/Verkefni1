#ifndef COMPUTERSCIENTIST_H
#define COMPUTERSCIENTIST_H

#include <string>

using namespace std;

class ComputerScientist
{
    public:
        ComputerScientist(string fName, string lName, char Sex, int birth, int death);
        string getFirstName();
        string getLastName();
        char getGender();
        int getYearOfBirth();
        int getYearOfDeath();

    protected:
    private:
        string first_name;
        string last_name;
        char sex;
        int year_of_birth;
        int year_of_death;

};

#endif // COMPUTERSCIENTIST_H
