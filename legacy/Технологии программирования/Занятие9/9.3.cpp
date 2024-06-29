//331 Числова 9.3
#include <iostream>
#include <cmath> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int z = 12; // Объявление глобальной переменной

// Функция для выполнения заданной операции
void modifyArray(string p, int A[]) {
    int sum = 0;
    for (int i = 0; i < z; i++) {
        sum += A[i];
    }
    if (sum % 2 == 0 && (p == "четна" || p == "чётна")) // Если сумма четная и пользователь угадал
        A[z - 1] = 500;
    else if (sum % 2 != 0 && (p == "нечетна" || p == "нечётна")) // Если сумма нечетная и пользователь угадал
        A[z - 1] = 500;
    else // В противном случае
        A[z - 1] = -500;
}

int main() {
    setlocale(LC_ALL, "Russian");
    string p;
    cout << "Введите предположение, сумма элементов массива четна или нечетна: ";
    cin >> p;

    srand(time(NULL));
    int A[z];
    // Создание и вывод массива A
    cout << "\nМассив A:\n";
    for (int i = 0; i < z; i++) {
        A[i] = rand() % 21; // Числа в диапазоне [0, 20]
        cout << A[i] << "\t";
    }

    // Выполнение заданной операции
    modifyArray(p, A);

    // Вывод измененного массива
    cout << "\nИзмененный массив A:\n";
    for (int i = 0; i < z; i++) {
        cout << A[i] << "\t";
    }
    cout << endl;

    return 0;
}