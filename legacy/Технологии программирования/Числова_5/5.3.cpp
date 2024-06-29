//331 Числова 5.3
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int n,ost,p=1;
    cout << "Введите трехзначное число: ";
    cin >> n;
    while (n!=0){
        ost=n%10;
        p=p*ost;
        n=n/10;
    }
    cout << p;
    return 0;
}
