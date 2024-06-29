//331 Числова 3.2
#include <iostream>
#include <cmath> 
using namespace std;
int main()  
{
    int a,b,c,h,s,p,v;
    cout << "Введите стороны треугольника: ";
    cin>>a>>b>>c;
    cout << "Введите высоту треугольника: ";
    cin>>h;
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        v=s*h/3;
        cout<<v;
    return 0;
}

