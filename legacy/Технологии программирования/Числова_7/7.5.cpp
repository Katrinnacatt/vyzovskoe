//331 Числова 7.5
#include <iostream>
#include <vector>
using namespace std;

bool IsMagical(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    int magicsum = 0;

    // Вычисление суммы элементов первой строки
    for (int j = 0; j < n; ++j)
        magicsum += matrix[0][j];

    // Проверка сумм строк и столбцов
    for (int i = 0; i < n; ++i) {
        int row_sum = 0, col_sum = 0;
        for (int j = 0; j < n; ++j) {
            row_sum += matrix[i][j];
            col_sum += matrix[j][i];
        }
        if (row_sum != magicsum || col_sum != magicsum)
            return false;
    }

    // Проверка главной диагонали
    int diag_sum = 0;
    for (int i = 0; i < n; ++i)
        diag_sum += matrix[i][i];
    if (diag_sum != magicsum)
        return false;

    // Проверка побочной диагонали
    diag_sum = 0;
    for (int i = 0; i < n; ++i)
        diag_sum += matrix[i][n - i - 1];
    if (diag_sum != magicsum)
        return false;

    return true;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n,i,j;
    cout << "Введите размер квадратной матрицы: ";
    cin >> n;

    // Создание и заполнение матрицы значениями, вводимыми пользователем
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Введите элементы квадратной матрицы:" << endl;
    for (i=0; i<n; i++) 
        for (j=0; j<n; j++)
            { 
                cout<<"Введите A["<<i<<"]"<<"["<<j<<"]="; cin >> matrix[i][j];
            }

    // Проверка, является ли матрица магической, и вывод результата
    cout << (IsMagical(matrix) ? "Матрица является магической\n" : "Матрица не является магической\n");

    return 0;
}
