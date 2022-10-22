// vvodit_chisla.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int a, b;
    a = 1; b = 0;
    while (a != 0)
    {
        cin >> a;
        b = b + a;

    }
    cout << b << endl;

}

