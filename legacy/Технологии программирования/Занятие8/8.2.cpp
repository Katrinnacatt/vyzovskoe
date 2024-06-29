//331 Числова 8.2
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int maxel (int M[15]); 
int kol (int M[15]);

int main() 
{
    setlocale(LC_ALL, "Russian");
    int A[15]; 
    int i, Rk, Rm;
    srand (time (NULL) );
    for (i=0; i<15;i++) 
        {
            A[i] = rand ( )%101; 
            cout << A[i] <<"\t";
        }
    cout<<"\n\n";
    Rk=kol (A);
    Rm=maxel (A);
    cout <<"Максимальный элемент массива= "<<Rm<<"\tКоличество значений массива, меньших 50 = "<<Rk;
    return 0; 
}

int maxel (int M[15]) {
    int i,maxi=-99999;
    for (i=0; i<15;i++) 
    {
        if (M[i]>maxi)
        maxi=M[i];
    }
    return maxi;
}
int kol (int M[15]) {
    int i,k=0;
    for (i=0; i<15;i++) 
    {
        if (M[i]<50) k++;}
    return k;
}

