//331 Числова 9.2
#include <iostream>
#include <cmath> 
#include <cstdlib> 
#include <ctime>
using namespace std;

const int N = 14; // Количество элементов массива

// Функция для вывода массива на экран
void printArray(int arr[]) {
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// Функция для изменения массива в зависимости от выбора пользователя
void modifyArray(int arr[], string choice) {
    if (choice == "отрицательные" || choice == "отрицательное") { // Исправлено
        for (int i = 0; i < N; i++) {
            if (arr[i] < 0) {
                arr[i] = abs(arr[i]); // Заменяем отрицательные элементы на их абсолютное значение
            }
        }
    } else if (choice == "положительные" || choice == "положительное") { // Исправлено
        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                arr[i] *= -1; // Умножаем положительные элементы на -1
            }
        }
    } else {
        cout << "Ошибка: некорректный выбор!" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int arr[N]; // Массив

    // Заполнение массива случайными числами в диапазоне [-10, 10]
    srand(time(NULL));
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 21 - 10;
        cout << arr[i] << "\t";
    }
    cout << endl;

    string choice;
    cout << "Выберите, что изменить: отрицательные (о) или положительные (п) элементы: ";
    cin >> choice;

    modifyArray(arr, choice); // Изменение массива в соответствии с выбором пользователя

    // Вывод измененного массива на экран
    printArray(arr);

    return 0;
}