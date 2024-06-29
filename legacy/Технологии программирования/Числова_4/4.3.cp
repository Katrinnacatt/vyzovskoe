//331 Числова 4.3
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите номер ноты: ";
    cin >> a;
    switch (a)
    {
        case 1: cout << "до"; break;
        case 2: cout << "ре"; break;
        case 3: cout << "ми"; break;
        case 4: cout << "фа"; break;
        case 5: cout << "соль"; break;
        case 6: cout << "ля"; break;
        case 7: cout << "си"; break;
    }
}

