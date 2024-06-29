
/*
    Напишите программу для перевода расстояния, укаженного в саженях
    (1 сажень равняется 2,16 метра), в метры
*/


#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    float METERS_IN_FATHOM = 2.16;
    int fathoms;
    float meters;

    cout << "Введите количество саженей: ";
    cin >> fathoms;

    meters = fathoms * METERS_IN_FATHOM;
    cout << "Метров в " << fathoms << " саженях: " << meters << endl;

    cout << "Нажмите Enter для продолжения...";
    cin.ignore();
}

