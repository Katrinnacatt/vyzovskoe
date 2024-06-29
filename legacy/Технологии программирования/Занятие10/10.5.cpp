//331 Числова 10.5
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// Функция для разделения чисел на четные и нечетные и их записи в файлы
void separateAndWriteNumbers(const string &filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return;
    }

    vector<int> chet_numbers; // Вектор для хранения четных чисел
    vector<int> nechet_numbers;  // Вектор для хранения нечетных чисел

    int num;
    while (file >> num) {
        if (num % 2 == 0) {
            chet_numbers.push_back(num); // Добавляем четное число в вектор четных чисел
        } else {
            nechet_numbers.push_back(num);  // Добавляем нечетное число в вектор нечетных чисел
        }
    }

    file.close();

    // Сортировка вектора четных чисел в порядке возрастания
    sort(chet_numbers.begin(), chet_numbers.end());

    // Сортировка вектора нечетных чисел в порядке убывания
    sort(nechet_numbers.begin(), nechet_numbers.end(), greater<int>());

    ofstream chet_file("chet.txt");
    ofstream nechet_file("nechet.txt");

    if (!chet_file.is_open() || !nechet_file.is_open()) {
        cout << "Ошибка открытия файлов для записи!" << endl;
        return;
    }

    // Запись отсортированных четных чисел в файл
    for (int chet_num : chet_numbers) {
        chet_file << chet_num << endl;
    }

    // Запись отсортированных нечетных чисел в файл
    for (int nechet_num : nechet_numbers) {
        nechet_file << nechet_num << endl;
    }

    chet_file.close();
    nechet_file.close();

    cout << "Четные и нечетные числа успешно записаны в файлы chet.txt и nechet.txt!" << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    separateAndWriteNumbers("f2.txt");
    return 0;
}