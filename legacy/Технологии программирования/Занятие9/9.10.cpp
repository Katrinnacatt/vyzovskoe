//331 Числова 9.10
#include <iostream>
#include <cmath> 
#include <cstdlib> 
#include <ctime>
using namespace std;

const int N = 12; // Количество элементов массива

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
        if (arr[i] > k) {
            arr[i] = 0; // Заменяем все элементы массива, большие k на 0
        } 
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[N]; // Массив
    int k;
    cout << "Введите число меньшее или равное 65: ";
    cin >> k;
    if (k > 65) { // Проверяем, находится ли k в допустимом диапазоне
        cout << "Ошибка: некорректный выбор!" << endl;
        return 1; // Завершаем программу с ошибкой
    }
    // Заполнение массива случайными числами в диапазоне [0, 70]
    srand(time(NULL));
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 71;
        cout << arr[i] << "\t";
    }
    cout << endl;

    modifyArray(arr, k); // Изменение массива в соответствии с значением элемента пользователя

    // Вывод измененного массива на экран
    printArray(arr);

    return 0;
}
