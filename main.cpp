#include "interface.h"

using namespace std;

int main()
{
    Interface message;
    int userChoice;
    do
    {
        message.menu(userChoice);
    }while(userChoice!=5);

    return 0;
}

//JUST NOD IF YOU CAN HEAR ME
