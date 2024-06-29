//331 Числова 7.4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int A[5][5], B[5], C[5], i, j, sum=0;
    for (i=0; i<5; i++) 
        for (j=0; j<5; j++)
            { 
                cout<<"Введите A["<<i<<"]"<<"["<<j<<"]="; cin >> A[i][j];
            }
    cout << "\nМатрица A:\n"; 
        for (i=0 ; i<5; i++)
            { 
                for (j=0; j<5; j++) 
                if (j!=4)
                    cout<<A[i][j]<<"\t"; 
                else
                    cout<<A[i][j]<<"\n"; 
            }
    for (i=0;i<5;i++)
        for (j=0; j<5; j++)
        {
            if (i==2) 
            {B[j] = A[i][j];}
            if (i==3) 
            {C[j] = A[i][j];}
        }
    cout << "Вектор B: " << endl;
    cout << "B = [" << B[0] << ", " << B[1] << ", " << B[2] << ", " << B[3] << ", " << B[4] << "] " << endl;
    cout << "Вектор C: " << endl;
    cout << "C = [" << C[0] << ", " << C[1] << ", " << C[2] << ", " << C[3] << ", " << C[4] << "] " << endl;
    return 0;
}
