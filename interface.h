#ifndef INTERFACE_H
#define INTERFACE_H


class Interface
{
public:
    Interface();
    void menu();
    void addNew();
    void displayList();
    void selectOrder();
    void search();
    void edit();
    void deleteInfo();

private:
    string firstName;
    string lastName;
    int yob;
    int yod;
    char gender;
};

#endif // INTERFACE_H
