//331 Числова 8.6
#include <iostream>
using namespace std;

// Функция для определения знака числа
int sign(int a) {
    if (a > 0) {
        return 1;
    } else if (a < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int x, y;
    // Ввод значений x и y с клавиатуры
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение y: ";
    cin >> y;
    
    // Определение знаков чисел x и y
    int signX = sign(x);
    int signY = sign(y);
    
    // Вычисление значения z
    int z = signX + signY;
    
    // Вывод результата
    cout << "Значение z = sign(x) + sign(y) равно " << z << endl;

    return 0;
}

