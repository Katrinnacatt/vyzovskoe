//331 Числова 4.4
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n,i;
    float s=1;
    cout << "Введите колличество членов ряда: ";
    cin >> n;
    for (i=1;i<=n;i++) s=s+(1./i);
    cout << s;
    return 0;
}

