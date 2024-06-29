
/*
    Напишите программу, в которой при выполнении в консольное окно выводятся
    натуральные числа от 1 до 10.
*/


#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    for (int i = 1; i < 11; i++)
    {
        cout << i << endl;
    }
    

    cout << "Нажмите Enter для продолжения...";
    cin.ignore();
}

