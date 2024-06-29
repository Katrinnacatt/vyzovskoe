//331 Числова 10.2
#include <iostream>
#include <fstream>
using namespace std;

const int r = 3;
const int c = 7;

// Функция для чтения двумерного массива из файла
void readArrayFromFile(int arr[][c], const string & filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return;
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            file >> arr[i][j];
        }
    }

    file.close();
}

// Функция для вывода двумерного массива на экран
void printArray(int arr[][c]) {
    cout << "Двумерный массив:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Функция для обнуления элемента массива по заданным номерам строки и столбца
void zeroElement(int arr[][c], int row, int col) {
    if (row >= 1 && row <= r && col >= 1 && col <= c) {
        arr[row - 1][col - 1] = 0;
    } else {
        cout << "Ошибка: некорректные номера строки и столбца!" << endl;
    }
}

// Функция для записи двумерного массива в файл
void writeArrayToFile(int arr[][c], const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cout << "Ошибка открытия файла для записи!" << endl;
        return;
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            file << arr[i][j] << " ";
        }
        file << endl;
    }

    file.close();
}

int main() {
    setlocale(LC_ALL, "Russian");
    int array[r][c];
    
    // Чтение массива из файла "2.txt"
    readArrayFromFile(array, "2.txt");

    // Вывод массива на экран
    printArray(array);

    // Запрос номера строки и столбца от пользователя
    int row, col;
    cout << "Введите номер строки и столбца для обнуления: ";
    cin >> row >> col;

    // Обнуление элемента массива
    zeroElement(array, row, col);

    // Вывод измененного массива на экран
    cout << "Измененный массив:\n";
    printArray(array);

    // Запись измененного массива в файл "modified_array.txt"
    writeArrayToFile(array, "modified_array.txt");

    return 0;
}