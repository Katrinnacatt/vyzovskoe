//331 Числова 9.11
#include <iostream>
#include <cmath> 
#include <cstdlib> 
#include <ctime>
using namespace std;

const int N = 11; // Количество элементов массива

// Функция для вывода массива на экран
void printArray(int arr[]) {
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// Функция для нахождения максимального значения в массиве
int findMax(int arr[]) {
    int max_val = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

// Функция для нахождения минимального значения в массиве
int findMin(int arr[]) {
    int min_val = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[N]; // Массив
    
    // Заполнение массива случайными числами в диапазоне [0, 30]
    srand(time(NULL));
    cout << "Массив:\n";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 31;
        cout << arr[i] << "\t";
    }
    cout << endl;
    
    // Запрашиваем у пользователя выбор максимального или минимального значения
    string choice;
    cout << "Желаете определить максимальное (макс) или минимальное (мин) значение элементов массива? ";
    cin >> choice;
    
    // Выполнение соответствующей операции и вывод результата
    int result;
    if (choice == "максимальное" || choice == "Максимальное" || choice == "Макс" || choice == "макс") {
        result = findMax(arr);
        cout << "Максимальное значение в массиве: " << result << endl;
    } else if (choice == "минимальное" || choice == "Минимальное" || choice == "Мин" || choice == "мин") {
        result = findMin(arr);
        cout << "Минимальное значение в массиве: " << result << endl;
    } else {
        cout << "Ошибка: некорректный выбор!" << endl;
    }
    
    return 0;
}

