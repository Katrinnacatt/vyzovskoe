//331 Числова 9.1
#include <iostream>
#include <cmath> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int z=14; //Объявление глобальной переменной

// Функция для выполнения заданной операции
void modifyArray(int n, int A[]) {
    for (int i = 0; i < z; i++) {
        if (A[i] % 2 != 0)
            A[i] = A[i] - n;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число: ";
    cin >> n;

    srand(time(NULL));
    int A[z];
    // Создание и вывод массива A
    cout << "\nМассив A:\n";
    for (int i = 0; i < z; i++) {
        A[i] = rand() % 11; // Числа в диапазоне [-10, 10]
        cout << A[i] << "\t";
    }

    // Выполнение заданной операции
    modifyArray(n,A);

    // Вывод измененного массива
    cout << "\nИзмененный массив A:\n";
    for (int i = 0; i < z; i++) {
        cout << A[i] << "\t";
    }
    return 0;
}



