//331 Числова 3.5
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float y,a=1.25,c=8.62,d=0.7,k=-0.93,x=0.38;
        y=a*pow(x,2)/(c*x+d)+k*sin(x);
        cout<<"Значение функции: "<<y<<endl;
    return 0;
}

