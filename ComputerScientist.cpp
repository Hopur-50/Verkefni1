#include "ComputerScientist.h"
#include<string>

ComputerScientist::ComputerScientist(string fName, string lName, char Sex, int birth, int death)
{
    first_name = fName;
    last_name = lName;
    sex = Sex;
    year_of_birth = birth;
    year_of_death = death;
    //ctor
}
ComputerScientist::ComputerScientist(ComputerScientist& copee)
{
    first_name = copee.getFirstName();
    last_name = copee.getLastName();
    sex = copee.getGender();
    year_of_birth = copee.getYearOfBirth();
    year_of_death = copee.getYearOfDeath();
    //copy ctor
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
