//331 Числова 4.8
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n,f=1,i;
    cout << "Введите число: ";
    cin >> n;
    for (i=1;i<=n;i++)
    {
       f=f*i;
    }
    cout << f;
    return 0;
}

