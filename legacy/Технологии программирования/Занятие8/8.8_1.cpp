//331 Числова 8.8
#include <iostream>
#include <cmath> 
using namespace std;

// Функции для расчета значения y по формулам
double calcA() {
    
    // Рассчитываем значение x по формуле
    double x = (sqrt(6) + 6) / 2 + (sqrt(13) + 13) / 2 + (sqrt(21) + 21) / 2;

    return x;
}

double calcB() {
    // Рассчитываем значение x по формуле
    double x = (sqrt(5) + 5) / (sqrt(7) + 7) + (sqrt(12) + 12) / (sqrt(8) + 8) + (sqrt(31) + 31) / (sqrt(2) + 2);

    return x;
}

double calcC() {
    // Рассчитываем значение x по формуле
    double x = (sqrt(8) + 15) / (sqrt(15) + 8) + (sqrt(12) + 6) / (sqrt(6) + 12) + (sqrt(21) + 7) / (sqrt(7) + 21);

    return x;
}
double calcD() {
    // Рассчитываем значение x по формуле
    double x = (sqrt(7) + 13) / (sqrt(13) + 7) + (sqrt(12) + 15) / (sqrt(15) + 12) + (sqrt(21) + 32) / (sqrt(32) + 21);

    return x;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // Вызываем функции для расчета значений y
    double resultA = calcA();
    double resultB = calcB();
    double resultC = calcC();
    double resultD = calcD();
    // Выводим результат
    cout << "а) Значение x = (sqrt(6)+6)/2+(sqrt(13)+13)/2+(sqrt(21)+21)/2 = " << resultA << endl;
    cout << "б) Значение x = (sqrt(5)+5)/(sqrt(7)+7)+(sqrt(12)+12)/(sqrt(8)+8)+(sqrt(31)+31)/(sqrt(2)+2) = " << resultB << endl;
    cout << "в) Значение x = (sqrt(8)+15)/(sqrt(15)+8)+(sqrt(12)+6)/(sqrt(6)+12)+(sqrt(21)+7)/(sqrt(7)+21) = " << resultC << endl;
    cout << "г) Значение x = (sqrt(7)+13)/(sqrt(13)+7)+(sqrt(12)+15)/(sqrt(15)+12)+(sqrt(21)+32)/(sqrt(32)+21) = " << resultD << endl;
    return 0;
}