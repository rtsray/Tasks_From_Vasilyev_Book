
/*
    Напишите программу для перевода километров в мили.
*/


#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int kilometers;
    int miles;
    const float KILOMETERS_IN_MILE = 1.6;
    
    cout << "Введите расстояние в километрах: ";
    cin >> kilometers;

    miles = kilometers / KILOMETERS_IN_MILE;
    cout << "Миль в " << kilometers << " километрах: " << miles << endl;
    
    cout << "Нажмите Enter для продолжения...";
    cin.ignore();
}

