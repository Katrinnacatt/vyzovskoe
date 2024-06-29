//331 Числова 4.7
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a,mini;
    cout << "Введите число: ";
    cin >> a;
    mini=a;
    while (a!=0)
    {
        cout << "Введите число: ";
        cin >> a;
        if (a<=mini) mini=a;
    }
    cout << mini;
    return 0;
}

