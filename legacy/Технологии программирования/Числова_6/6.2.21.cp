//331 Числова 6.2.21 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a,x,y,ex,mi,mix;
    cout << "Введите постоянную: ";
    cin >> a;
    mi=9999999;
    ex=2.71828;
    for (x=-2;x<=2;x=x+0.2) {
        if (a + pow(ex,(-1)*x) != 0) {
            y = (a + pow(ex, x)) / (a + pow(ex, (-1)*x));
            if (mi>=y){
                mi=y;
                mix=x;
            }
        }
        else {
            cout << "Решений нет!";
        }
    }
    cout << "Минимальное значение функции в промежутке [-2,2] с шагом 0.2: " << mi << endl;
    cout << "Минимальное значение x: " << mix << endl;
    return 0;
}

