//331 Числова 9.12
#include <iostream>
#include <cmath> 
#include <cstdlib> 
#include <ctime>
using namespace std;

const int N = 10; // Количество элементов массива

// Функция для вывода массива на экран
void printArray(int arr[]) {
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// Функция для нахождения суммы элементов массива
int findSum(int arr[]) {
    int summa=0;
    for (int i = 0; i < N; i++) {
        summa += arr[i];
    }
    return summa;
}

// Функция для нахождения среднего арифметического элементов массива
int findSr(int arr[]) {
    int summa = 0, k = 0;
    double sr;
    for (int i = 0; i < N; i++) {
        summa += arr[i];
        k += 1;
    }
    sr = summa / k;
    return sr;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[N]; // Массив
    
    // Заполнение массива случайными числами в диапазоне [0, 20]
    srand(time(NULL));
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 21;
        cout << arr[i] << "\t";
    }
    cout << endl;
    
    // Запрашиваем у пользователя выбор максимального или минимального значения
    string choice;
    cout << "Желаете определить сумму (сум) или среднее арифметическое (сред) элементов массива? ";
    cin >> choice;
    
    // Выполнение соответствующей операции и вывод результата
    int result;
    if (choice == "сумму" || choice == "Сумму" || choice == "Сум" || choice == "сум") {
        result = findSum(arr);
        cout << "Сумма элементов массива: " << result << endl;
    } else if (choice == "среднее арифметическое" || choice == "Среднее арифметическое" || choice == "Сред" || choice == "сред") {
        result = findSr(arr);
        cout << "Среднее арифметическое элементов массива: " << result << endl;
    } else {
        cout << "Ошибка: некорректный выбор!" << endl;
    }
    
    return 0;
}

