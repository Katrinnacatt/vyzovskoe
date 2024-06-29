//331 Числова 4.9
#include <iostream>
using namespace std;
const int n=10;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i,j;
    cout<<"Квадрат Пифагора\n";
    for (i=1; i<=n;i++)
    {
        cout<<" \n";   
        for (j=1;j<=n;j++) 
        {
            cout<<j*i<<" ";
            cout.width(3); 
        }
    }
    return 0;
}
