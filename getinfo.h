#ifndef GETINFO_H
#define GETINFO_H


class GetInfo
{
public:
    GetInfo();
    GetInfo(int age, char gender, string name, int year_of_birth, int year_of_death);
    string getName();
    int getAge();
    string getGender();
    int getYearOfBirth();
    int getYearOfDeath();
    void collectData();
private:
    int m_age;
    char m_gender;
    string m_name;
    int m_year_of_birth;
    int m_year_of_death;

};

#endif // GETINFO_H
