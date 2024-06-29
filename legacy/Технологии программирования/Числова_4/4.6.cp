//331 Числова 4.6
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i,n,a,b,s;
    cout << "Введите число для цикла: ";
    cin >> n;
    cout << "Введите число, которому должно быть кратно: ";
    cin >> a;
    cout << "Введите число, которому не должно быть кратно: ";
    cin >> b;
    for (i=1;i<=n;i++){
        s=pow(i,3)-17*i*pow(n,2)+pow(n,3);
        if (s%a==0 && s%b!=0) cout << s <<",";
        }
    return 0;
}

