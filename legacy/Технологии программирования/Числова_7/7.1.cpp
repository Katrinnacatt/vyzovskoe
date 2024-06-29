//331 Числова 7.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int A[10], B[10], C[10], i, j, k =0, tmp;
    for (i=0; i<10; i++)
        { cout << "Input A [" << i << "] = ";
        cin >> A[i]; }
    for(i=0;i<10;i++) if(A[i]<0)k++;
        cout << "\nTotal negative elements = " << k << ":";
    for (i=0; i<10; i++)
        if (A[i] < 0) cout << "\n\tA[" << i<< "] = " << A[i];
    k=0;
    for (i=0; i<10; i++)
        if (A[i]<0)
        { B[k]=A[i];
        k++; }
    cout << "\nThe Array of negative elements"; cout << "\n and their indexes:";
    for (i=0; i<k; i++)
        cout << "\n\tB[" << i <<"] = " << B[i];
    for (i=0; i<k-1; i++) for (j=i+1; j<k; j++)
        { if (B[j]>B[i])
        { tmp=B[j];
        B[j]=B[i]; B[i]=tmp;
            } 
        }
    cout<<"\nThe sorted array of negative elements:"; 
    for (i=0; i<k; i++)
        { C[i] = B[i];
        cout << "\n\tC[" << i <<"] = " << C[i];
        }
    cout << "\n\nEnd programm" << endl;
    return 0;
}
