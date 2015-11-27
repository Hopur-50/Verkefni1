#ifndef COMPUTERSCIENTIST_H
#define COMPUTERSCIENTIST_H
#include <string>

using namespace std;

class ComputerScientist
{
    public:
        ComputerScientist(string name, char sex, int birth, int death);
        virtual ~ComputerScientist();
    protected:
    private:
        string name;
        char sex;
        int year_of_birth;
        int year_of_death;

};

#endif // COMPUTERSCIENTIST_H
