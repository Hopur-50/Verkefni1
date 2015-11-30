#include "ComputerScientist.h"

ComputerScientist::ComputerScientist(string first_name, string last_name, char sex, int birth, int death)
{
    first_name = first_name;
    last_name=last_name;
    sex = sex;
    year_of_birth = birth;
    year_of_death = death;
    //ctor
}

ComputerScientist::~ComputerScientist()
{
    //dtor
}
string ComputerScientist::getName()
{
    return m_name;
}
int ComputerScientist::getAge()
{
    return m_age;
}
string ComputerScientist::getGender()
{
    return m_gender;
}
int ComputerScientist::getYearOfBirth()
{
    return m_year_of_birth;
}
