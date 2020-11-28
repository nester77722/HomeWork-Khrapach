#include <iostream>
#include "Abonent.h"

using namespace std;

int main()
{
    setlocale(0, "");

    Abonent* firstAbonent,* secondAbonent;

    char* firstNumber = new char[11];

    char* secondNumber = new char[11];

    strcpy(firstNumber, "0108498532");

    strcpy(secondNumber, "1219509643");

    firstAbonent = new Abonent(firstNumber, 15);

    secondAbonent = new Abonent(secondNumber, 10);
    
    firstAbonent->Show();

    secondAbonent->Show();

    cout << "firstAbonent == secondAbonent: ";

    bool *isSame = firstAbonent->Equals(secondAbonent);

    if (*isSame)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

   

    return 0;
}