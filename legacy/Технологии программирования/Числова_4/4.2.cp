//331 Числова 4.2
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b,c,d,x_1,x_2;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;
    d=b*b-4*a*c;
    x_1=(-b+sqrt(d))/2*a;
    x_2=(-b-sqrt(d))/2*a;
    if (a!=0) {
        if (d>=0)  cout << "x1=" << x_1 << " "<< "x2=" << x_2 ; 
        if (d<0) cout << "Решения нет";}   
        else {cout << "Уравнение линейное";}
    return 0;
}

