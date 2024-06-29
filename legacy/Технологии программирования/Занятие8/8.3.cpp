//331 Числова 8.3
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int kolch (int M[8]); 
int kolnech (int M[8]);

int main() 
{
    setlocale(LC_ALL, "Russian");
    int A[8],B[8]; 
    int i, Rch, Rn;
    srand (time (NULL) );
    
    //первая последовательность
    cout << "Последовательность A: ";
    for (i=0; i<8;i++) 
        {
            A[i] = rand() % 91 + 10; 
            cout << A[i] <<"\t";
        }
    cout << "\n\n";
    //вторая последовательность
    cout << "Последовательность B: ";
    for (i=0; i<8;i++) 
        {
            B[i] = rand() % 91 + 10;
            cout << B[i] <<"\t";
        }
    
    cout<<"\n\n";
    cout<<"\n\n";
    Rch=kolch(A);
    Rn=kolnech(B);
    cout <<"Количество четных числел последовательности A = "<<Rch<<endl;
    cout << "Количество нечетных чисел последовательности B = "<<Rn<<endl;
    return 0; 
}

int kolch (int M[8]) {
    int i,k=0;
    for (i=0; i<8;i++) 
    {
        if (M[i]%2==0) k++;}
    return k;
}
int kolnech (int M[8]) {
    int i,k=0;
    for (i=0; i<8;i++) 
    {
        if (M[i]%2!=0) k++;}
    return k;
}

