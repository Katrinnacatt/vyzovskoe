//331 Числова 10.2
#include <iostream>
#include <fstream>
using namespace std;

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    ifstream inputFile("f.txt"); // Открытие файла f для чтения
    ofstream outputFileEven("g.txt"); // Открытие файла g для записи
    ofstream outputFileOdd("h.txt"); // Открытие файла h для записи

    if (!inputFile.is_open() || !outputFileEven.is_open() || !outputFileOdd.is_open()) {
        cout << "Ошибка открытия файлов!" << endl;
        return 1;
    }

    int num;
    while (inputFile >> num) { // Чтение чисел из файла f.txt
        if (num % 2 == 0) {
            outputFileEven << num << " "; // Запись четных чисел в файл g.txt
        } else {
            outputFileOdd << num << " "; // Запись нечетных чисел в файл h.txt
        }
    }

    // Добавление комментариев в файлы g.txt и h.txt
    outputFileEven << "\n\nЧетные числа из файла f.txt\n";
    outputFileOdd << "\n\nНечетные числа из файла f.txt\n";

    // Закрытие всех файлов
    inputFile.close();
    outputFileEven.close();
    outputFileOdd.close();

    cout << "Четные и нечетные числа успешно записаны в файлы g.txt и h.txt!" << endl;

    return 0;
}