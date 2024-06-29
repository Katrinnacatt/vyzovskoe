//331 Числова 8.1
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int summa (int M[12]); 
int mini (int M[12]);

int main() 
{
    int A[12]; 
    int i, Rs, Rm;
    srand (time (NULL) );
    for (i=0; i<12;i++) 
        {
            A[i] = rand ( )%101; 
            cout << A[i] <<"\t";
        }
    cout<<"\n\n";
    Rs=summa (A);
    Rm=mini (A);
    cout <<"Summa= "<<Rs<<"\tMinimum= "<<Rm;
    return 0; 
}
int summa (int M[12]) {
    int i,S=0;
    for (i=0; i<12;i++) S=S+M[i]; return S;
}
int mini (int M[12]) {
    int i,m;
    m=M[0];
    for (i=1; i<12;i++) {if (M[i]<m) m=M[i];}
    return m;
}
