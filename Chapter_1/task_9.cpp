
/*
    Напишите программу, в которой создаётся массив и заполняется степенями 
    двойки (значения 2**0, 2**1, 2**2, 2**3 и так далее). По умолчанию массив
    заполнен нулями.
*/


#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");

    int size = 20;
    int myArray[size]{0};
    int quantity_of_twos;

    cout << "Введите кол-во двоек (макс. 20): ";
    cin >> quantity_of_twos;

    for (int i = 0; i < quantity_of_twos; i++)
    {
        myArray[i] = pow(2.0, i);
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    cout << "Нажмите Enter для продолжения...";
    cin.ignore();
}

