//331 Числова 5.1
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int d,ost;
    cout << "Введите число месяца: ";
    cin >> d;
    if (1<=d<=31) {
        ost=d%7;
        switch (ost){
            case 0: cout << "Это воскресенье"; break;
            case 1: cout << "Это понедельник"; break;
            case 2: cout << "Это вторник"; break;
            case 3: cout << "Это среда"; break;
            case 4: cout << "Это четверг"; break;
            case 5: cout << "Это пятница"; break;
            case 6: cout << "Это суббота"; break;
            }
    } else { cout << "Такого числа нет в месяце";}
    return 0;
}
