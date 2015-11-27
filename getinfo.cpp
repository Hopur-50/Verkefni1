#include "getinfo.h"
GetInfo::GetInfo()
{


}


/*
GetInfo::GetInfo(int age, char gender, string name, int year_of_birth, int year_of_death)
{
    m_age = age;
    m_gender = gender;
    m_name = name;
    m_year_of_birth = year_of_birth;
    m_year_of_death = year_of_death;
}*/
string GetInfo::getName()
{
    return m_name;
}
int GetInfo::getAge()
{
    return m_age;
}
string GetInfo::getGender()
{
    return m_gender;
}
int GetInfo::getYearOfBirth()
{
    return m_year_of_birth;
}
void GetInfo::collectData()
{
    cout << " --------------------------------------" << endl;
    cout << "| Welcome to the matrix of awesomeness |" << endl;
    cout << " --------------------------------------" << endl;

    cout << "Please enter your data here " << endl;

    cout << "Name: ";
    cin >> m_name;

    cout << "Age: ";
    cin >> m_age;

    cout << "Gender: ";
    cin >> m_gender;

    cout << "Year of birth: ";
    cin >> m_year_of_birth;

    cout << "If applies, year of death: ";
    cin >> m_year_of_death;
}

