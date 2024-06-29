//331 Числова 6.1.21 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a,x,y,ex;
    cout << "Введите постоянную: ";
    cin >> a;
    cout << "Введите значение x: ";
    cin >> x;
    ex=2.71828;
    if (a + pow(ex,(-1)*x) != 0) {
        y = (a + pow(ex, x)) / (a + pow(ex, (-1)*x)) ;
        cout << "Значение функции в заданной точке: " << y << endl;
    } else {
        cout << "Решений нет!";
    }
    return 0;
}

