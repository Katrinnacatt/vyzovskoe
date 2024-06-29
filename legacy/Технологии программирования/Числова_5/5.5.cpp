//331 Числова 5.5
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    float s,i;
    int n;
    cout << "Введите сумму вклада: ";
    cin >> s;
    cout << "Введите количество лет: ";
    cin >> n;
    for (i=1;i<=n;i++){
        s=s*1.03;
    }
    cout << s;
    return 0;
}
