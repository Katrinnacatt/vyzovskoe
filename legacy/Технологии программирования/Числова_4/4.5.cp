//331 Числова 4.4
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float x=-2,y;
    while (x<2) 
    {
        cout << x << " ";
        y=(-2.4)*pow(x,2)+5*x-3;
        cout << y << endl;
        x=x+0.5;
    }
    return 0;
}

