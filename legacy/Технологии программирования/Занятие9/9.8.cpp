//331 Числова 9.8
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
void modifyArray(int arr[], int k) {
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            arr[i] *= 2; // Удваиваем элементы с четными индексами
        } else {
            arr[i] -= k; // Уменьшаем элементы с нечетными индексами на введенное число
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[N]; // Массив
    int k;
    cout << "Введите число: ";
    cin >> k;

    // Заполнение массива случайными числами в диапазоне [20, 80]
    srand(time(NULL));
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 61 + 20;
        cout << arr[i] << "\t";
    }
    cout << endl;

    modifyArray(arr, k); // Изменение массива в соответствии с значением элемента пользователя

    // Вывод измененного массива на экран
    printArray(arr);

    return 0;
}
