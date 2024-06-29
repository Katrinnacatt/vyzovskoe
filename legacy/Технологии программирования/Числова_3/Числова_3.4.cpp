//331 Числова 3.4
#include <iostream>
using namespace std;
int main()
{
    int a,b,sum=0;
    cout << "Введите количество карандашей: ";
    cin>>a;
    cout << "Введите стоимость карандашей: ";
    cin>>b;
        sum=a*b;
    cout << "Введите количество тетрадей: ";
    cin>>a;
    cout << "Введите стоимость тетрадей: ";
    cin>>b;
        sum=sum+a*b;
        cout<<"Общая стоимость:"<<sum;
    return 0;
}

