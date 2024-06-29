//331 Числова 9.2
#include <iostream>
#include <cmath> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int z = 19; // Объявление глобальной переменной

// Функция для выполнения заданной операции
void modifyArray(int s1, int s2, int A[]) {
    if (s1 >= s2) {
        cout << "Ошибка: второе число должно быть больше первого!" << endl;
        exit(1); // Завершить программу с кодом ошибки
    }
    int sum = 0;
    for (int i = s1; i <= s2; i++) {
        sum += A[i];
    }
    int average = sum / (s2 - s1 + 1); // Вычисление среднего арифметического
    A[z - 1] = average; // Присвоение полученного значения последнему элементу массива
}

int main() {
    setlocale(LC_ALL, "Russian");
    int s1, s2;
    cout << "Введите два числа с 0 по 18, чтобы второе число было больше первого: ";
    cin >> s1 >> s2;

    srand(time(NULL));
    int A[z];
    // Создание и вывод массива A
    cout << "\nМассив A:\n";
    for (int i = 0; i < z; i++) {
        A[i] = rand() % 51; // Числа в диапазоне [0, 50]
        cout << A[i] << "\t";
    }
    
    cout << endl;
    
    // Выполнение заданной операции
    modifyArray(s1, s2, A);
    
    // Вывод измененного массива
    cout << "\nИзмененный массив A:\n";
    for (int i = 0; i < z; i++) {
        cout << A[i] << "\t";
    }
    cout << endl;

    return 0;
}