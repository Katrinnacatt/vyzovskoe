//331 Числова 9.5
#include <iostream>
#include <cmath> 
#include <cstdlib> 
#include <ctime>
using namespace std;

const int N = 15; // Количество элементов массива

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
    int value = arr[k - 1]; // Значение элемента с индексом k-1
    if (k-1<=N && k-1>=0)
        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                arr[i] -= value; // Уменьшаем положительные элементы на значение элемента с индексом k-1
            }
    }
    else {
        cout << "Ошибка: некорректный выбор!" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[N]; // Массив
    int k;
    cout << "Введите число от 1 до 15: "<< endl;
    cin >> k;
    if (k < 1 || k > N) { // Проверяем, находится ли k в допустимом диапазоне
        cout << "Ошибка: некорректный выбор!" << endl;
        return 1; // Завершаем программу с ошибкой
    }
    // Заполнение массива случайными числами в диапазоне [-15, 15]
    srand(time(NULL));
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 31 - 15;
        cout << arr[i] << "\t";
    }
    cout << endl;

    modifyArray(arr, k); // Изменение массива в соответствии с значением элемента пользователя

    // Вывод измененного массива на экран
    printArray(arr);

    return 0;
}
