//331 Числова 12.1
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    ifstream inputFile("1.txt"); // Открываем файл для чтения

    ofstream file1("okydgava.txt"); 
    ofstream file2("gamzatov.txt"); 

    string line;
    int lineNumber1 = 0; 
    int lineNumber2 = 0; 

    // Проверяем, успешно ли открыли файл для чтения
    if (!inputFile.is_open() || !file1.is_open() || !file2.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    while (getline(inputFile, line)) {
        if (lineNumber1 % 2 == 0) { // Записываем строки в первый файл
            file1 << line << endl;
        } else { // Записываем строки во второй файл
            file2 << line << endl;
        }
        lineNumber1++; 
    }

    // Закрываем файлы
    inputFile.close();
    file1.close();
    file2.close();

    cout << "Строки стихотворений записаны в файлы okydgava.txt и gamzatov.txt" << endl;

    return 0;
}