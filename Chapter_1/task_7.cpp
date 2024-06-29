
/*
    Напишите программу, в которой создаётся массив и заполняется чётными
    натуральными числами в диапазоне [0; размер_массива], по умолчанию значения
    массива равны нулю.
*/


#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");

    int size = 20; 
    int myArray[size]{0};
    int index = 0;

    for (int i = 0; i <= size; i++)
    {
        if (i % 2 == 0)
        {
            myArray[index] = i;
            index++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    cout << "Нажмите Enter для продолжения...";
    cin.ignore();
}

