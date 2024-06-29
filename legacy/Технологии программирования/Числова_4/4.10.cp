//331 Числова 4.11
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 5;
    const int m = 7;
    int matrix[n][m];

    // Ввод матрицы с клавиатуры
    cout << "Введите элементы матрицы 5x7:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Введите элементы строки " << i + 1 << " (через пробел): ";
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    // Находим номер строки с минимальной суммой
    int minsum = INT_MAX; 
    int minsumn = -1; 
    int i,j;
    for (i = 0; i < n; ++i) {
        int nsum = 0;
        for (int j = 0; j < m; ++j) {
            nsum += matrix[i][j];
        }
        if (nsum < minsum) {
            minsum = nsum;
            minsumn = i;
        }
    }
    cout << "Номер строки с минимальной суммой: " << minsumn + 1;
}
