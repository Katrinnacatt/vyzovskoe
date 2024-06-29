//331 Числова 4.1
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    if (a>b) cout << a; 
    if (b>a) cout << b;
    if (a==b) cout << "Числа равны";
    return 0;
}

