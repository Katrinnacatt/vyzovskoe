//331 Числова 4.11
#include <iostream>
#include <cmath>
using namespace std;
/*1 вариант решения
int main() 
{
    setlocale(LC_ALL, "Russian");
    double a,b,s;
    char operation;
    do {
        cout << "Введите 'b' для завершения или другую кнопку для введения выражения: ";
        cin >> operation;
        if (operation == 'b' || operation == 'B') {
            cout << "Программа завершена." << endl;
            break;
        }
        else{
            cout << "Введите выражение (например, 2+3): ";
            cin >> a >> operation >> b;
            switch (operation) {
                case '+': 
                    cout << a+b << endl;
                    break;
                case '-': 
                    cout << a-b << endl;
                    break;
                case '*': 
                    cout << a*b << endl;
                    break;
                case '/': 
                    if (b!=0)
                        cout << a/b << endl;
                    else
                        cout << "Ошибка: деление на ноль!" << endl;
                    break;
                default:
                    cout << "Ошибка: неверная операция!";
            }
        }
    } 
    while (true);
    return 0;
}*/
        

// 2 вариант решения
int main() 
{
    setlocale(LC_ALL, "Russian");
    double a,b,s;
    char operation;
    do {
        cout << "Введите операцию (+,-,*,/) или 'b' для завершения: ";
        cin >> operation;
        if (operation == 'b' || operation == 'B') {
            cout << "Программа завершена." << endl;
            break;
        }
        cout << "Введите два числа: ";
        cin >> a >> b;
        
        switch (operation) {
            case '+': 
                cout << a+b << endl;
                break;
            case '-': 
                cout << a-b << endl;
                break;
            case '*': 
                cout << a*b << endl;
                break;
            case '/': 
                if (b!=0)
                    cout << a/b << endl;
                else
                    cout << "Ошибка: деление на ноль!" << endl;
                break;
            default:
                cout << "Ошибка: неверная операция!";
        }
    } 
    while (true);
    return 0;
}
