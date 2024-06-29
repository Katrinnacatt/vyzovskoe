//331 Числова 8.5
#include <iostream>
using namespace std;

// Функция для вычисления факториала числа n
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int fact4, fact5, fact6, fact8, chisl, znam;
    double result;
    // Вычисляем факториалы для 4, 5, 6 и 8
    fact4 = factorial(4);
    fact5 = factorial(5);
    fact6 = factorial(6);
    fact8 = factorial(8);

    // Вычисляем значения числителя и знаменателя
    chisl = 2 * fact5 + 3 * fact8;
    znam = fact6 + fact4;

    // Проверяем, что знаменатель не равен нулю
    if (znam != 0) {
        // Вычисляем и выводим результат деления
        result = static_cast<double>(chisl) / znam;
        cout << "Значение выражения (2*5!+3*8!)/(6!+4!) = " << result << endl;
    } else {
        cout << "Ошибка: деление на ноль." << endl;
    }

    return 0;
}

