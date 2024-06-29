
/*
    Напишите программу с функцией для перевода скорости, указанной в м/c
    ("метры в секунду") в км/ч ("километры в час").
*/


#include <iostream>
#include <stdlib.h>
using namespace std;


int ConvertMpsToKph(int mps)
{
    // x км/ч = y м/c * 3,6
    return mps * 3.6; 
}


int main()
{
    setlocale(LC_ALL, "Rus");

    int mps;  // mps - meters per second
    int kph;  // kph - kilometers per hour

    cout << "Введите скорость в м/c: ";
    cin >> mps;

    kph = ConvertMpsToKph(mps);
    cout << "Скорость " << mps << "м/с равна " << kph << "км/ч" << endl;

    cout << "Нажмите Enter для продолжения...";
    cin.ignore();
}

