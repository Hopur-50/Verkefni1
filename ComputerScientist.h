#ifndef COMPUTERSCIENTIST_H
#define COMPUTERSCIENTIST_H
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class ComputerScientist
{
    public:
        ComputerScientist(string first_name, string last_name, char sex, int birth, int death);
        ~ComputerScientist();
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
