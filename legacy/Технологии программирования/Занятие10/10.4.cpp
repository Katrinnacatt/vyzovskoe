//331 Числова 10.4
#include <iostream>
#include <fstream>
#include <cmath> 
#include <limits> 
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // Открываем файл для чтения
    ifstream inputFile("f1.txt");

    // Проверяем, успешно ли открылся файл
    if (!inputFile.is_open()) {
        cout << "Ошибка: не удалось открыть файл f1.txt!" << endl;
        return 1; 
    }

    // Переменные для хранения результатов
    double max_value = -INFINITY; 
    double min_even_value = INFINITY; 
    double max_abs_odd_value = 0.0; 
    double first_value, last_value;
    
    // Читаем числа из файла
    double num;
    int index = 0; // Индекс текущего числа
    while (inputFile >> num) {
        if (index == 0) { 
            first_value = num; 
        }
        last_value = num; 
        
        // Находим наибольшее значение
        if (num > max_value) {
            max_value = num;
        }

        // Находим наименьшее значение среди четных
        if (index % 2 == 0 && num < min_even_value) {
            min_even_value = num;
        }

        // Находим наибольший модуль среди нечетных
        if (index % 2 != 0 && abs(num) > max_abs_odd_value) {
            max_abs_odd_value = abs(num);
        }
        index++; 
    }

    // Проверяем, были ли считаны какие-либо числа
    if (index == 0) {
        cout << "Ошибка: файл f1.txt пуст!" << endl;
        return 1; 
    }

    // Вычисляем сумму наибольшего и наименьшего значений
    double sum_max_min = max_value + min_even_value;

    // Вычисляем разность первого и последнего чисел
    double first_last_diff = first_value - last_value;

    // Выводим результаты на экран
    cout << "1. Наибольшее значение: " << max_value << endl;
    cout << "2. Наименьшее значение с четными номерами: " << min_even_value << endl;
    cout << "3. Наибольшее значение модуля с нечетными номерами: " << max_abs_odd_value << endl;
    cout << "4. Сумма наибольшего и наименьшего значений: " << sum_max_min << endl;
    cout << "5. Разность первого и последнего значений: " << first_last_diff << endl;

    // Закрываем файл
    inputFile.close();

    return 0; 
}