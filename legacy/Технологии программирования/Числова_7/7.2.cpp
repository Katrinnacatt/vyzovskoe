//331 Числова 7.2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int A[10], i, kotr=0, kpol=0;
    float sr1=0,sr2=0, sum1=0, sum2=0;
    for (i=0; i<10; i=i+1)
        { cout << "Введите A [" << i << "] = ";
        cin >> A[i];}
    for(i=0;i<10;i++) 
        {if(A[i]<0)
            {
                kotr++;
                sum1=sum1+A[i];
            }
        if (A[i]>0)
            {
                kpol++;
                sum2=sum2+A[i];
            }
        }
        sr1=sum1/kotr;
        sr2=sum2/kpol;
        cout << "Количество отрицательных чисел = " << kotr << endl;
        cout << "Сумма отрицательных чисел = " << sum1 << endl;
        cout << "Их среднее арифметическое = " << sr1 << endl;
        cout << "Количество положительных чисел = " << kotr << endl;
        cout << "Сумма положительных чисел = " << sum2 << endl;
        cout << "Их среднее арифметическое = " << sr2 << endl;
    return 0;
}