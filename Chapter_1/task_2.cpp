
/*
    Напишите программу, в которой отображаются пять первых нечётных чисел
*/


#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int i = 1;
    int count = 0;

    while (count < 5)
    {
        if (i % 2 != 0)
        {
            count += 1;
            cout << i << endl;
        }
    
    i++;
    }

    cout << "Нажмите Enter для продолжения...";
    cin.get();
}

