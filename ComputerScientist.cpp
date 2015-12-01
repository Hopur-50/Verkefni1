#include "ComputerScientist.h"
#include<string>

ComputerScientist::ComputerScientist(string first_name, string last_name, char sex, int birth, int death)
{
    first_name = first_name;
    last_name = last_name;
    sex = sex;
    year_of_birth = birth;
    year_of_death = death;
    //ctor
}

ComputerScientist::~ComputerScientist()
{
    //dtor
}

string ComputerScientist::getFirstName()
{
    return first_name;
}

string ComputerScientist::getLastName()
{
    return last_name;
}

char ComputerScientist::getGender()
{
    return sex;
}

int ComputerScientist::getYearOfBirth()
{
    return year_of_birth;
}

int ComputerScientist::getYearOfDeath()
{
    return year_of_death;
}
