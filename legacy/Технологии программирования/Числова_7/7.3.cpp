//331 Числова 7.3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int A[3][3], B[3][3], i, j, Sum=0;
    for (i=0; i<3; i++) 
        for (j=0; j<3; j++)
            { 
                cout<<"Введите A["<<i<<"]"<<"["<<j<<"]="; 
                cin >> A[i][j];
            }
            cout << "\nМатрица A:\n"; 
            for (i=0 ; i<3; i++)
            { 
                for (j=0; j<3; j++) if (j!=2)
                    cout<<A[i][j]<<"\t"; 
                else
                    cout<<A[i][j]<<"\n"; 
            }
            for (i=0; i<3; i++)
                Sum = Sum + A[i][i];
            cout << "\nСумма элементов "; 
            cout << "\n\tглавной диагонали = " << Sum;
            for (i=0; i<3; i++) for (j=0; j<3; j++)
                { 
                    B[i][j] =A [i][j]; 
                    if (B[i][j] < 0)
                        B[i][j] = 0; 
                }
            cout << "\n\nНовая матрица B:\n"; 
            for (i=0; i<3; i++)
            { 
                for (j=0; j<3; j++) if(j!=2)
                cout<<B[i][j]<<"\t"; else
                cout<<B[i][j]<<"\n"; 
            }
            cout << "\n\nEnd programm" << endl;
    return 0;
}