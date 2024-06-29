//331 Числова 8.7
#include <iostream>
#include <cmath> 
using namespace std;

// Функции для расчета значения y по формулам
double calcA() {
    return (1 + sin(1)) / 3 + (5 + sin(5)) / 3 + (3 + sin(3)) / 3;
}

double calcB() {
    return (2 + sin(2)) / (sin(5) + 5) + (6 + sin(6)) / (sin(3) + 3) + (1 + sin(1)) / (sin(4) + 4);
}

double calcC() {
    return (1 + sin(4)) / (4 + sin(1)) + (7 + sin(5)) / (5 + sin(7)) + (3 + sin(2)) / (2 + sin(3));
}

double calcD() {
    return (2 + sin(3)) / (3 + sin(2)) + (1 + sin(5)) / (5 + sin(1)) + (4 + sin(7)) / (7 + sin(3));
}

int main() {
    setlocale(LC_ALL, "Russian");
    // Вызываем функции для расчета значений y
    double resultA = calcA();
    double resultB = calcB();
    double resultC = calcC();
    double resultD = calcD();
    // Выводим результат
    cout << "а) Значение y = (1+sin1)/3+(5+sin5)/3+(3+sin3)/3 = " << resultA << endl;
    cout << "б) Значение y = (2+sin2)/(sin5+5)+(6+sin6)/(sin3+3)+(1+sin1)/(sin4+4) = " << resultB << endl;
    cout << "в) Значение y = (1+sin4)/(4+sin1)+(7+sin5)/(5+sin7)+(3+sin2)/(2+sin3) = " << resultC << endl;
    cout << "г) Значение y = (2+sin3)/(3+sin2)+(1+sin5)/(5+sin1)+(4+sin7)/(7+sin3) = " << resultD << endl;
    return 0;
}