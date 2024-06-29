//331 Числова 8.8
#include <iostream>
#include <cmath> 
using namespace std;

double calculateXA() {
    double x_a = (sqrt(6) + 6) / 2;
    double x_b = (sqrt(13) + 13) / 2;
    double x_c = (sqrt(21) + 21) / 2;

    return x_a + x_b + x_c;
}
double calculateXB(double a, double b) {
    return (sqrt(a) + a) / (sqrt(b) + b);
}

double calculateX(double a, double b) {
    return (sqrt(a) + b) / (sqrt(b) + a);
}

int main() {
    setlocale(LC_ALL, "Russian");
    // Вызываем функцию для расчета значений x
    double resultA = calculateXA();
    double resultB = calculateXB(5, 7) + calculateXB(12, 8) + calculateXB(31, 2);
    double resultC = calculateX(8, 15) + calculateX(12, 6) + calculateX(21, 7);
    double resultD = calculateX(7, 13) + calculateX(12, 15) + calculateX(21, 32);

    // Выводим результат
    cout << "а) Значение x = (sqrt(6)+6)/2+(sqrt(13)+13)/2+(sqrt(21)+21)/2 = " << resultA << endl;
    cout << "б) Значение x = (sqrt(5)+5)/(sqrt(7)+7)+(sqrt(12)+12)/(sqrt(8)+8)+(sqrt(31)+31)/(sqrt(2)+2) = " << resultB << endl;
    cout << "в) Значение x = (sqrt(8)+15)/(sqrt(15)+8)+(sqrt(12)+6)/(sqrt(6)+12)+(sqrt(21)+7)/(sqrt(7)+21) = " << resultC << endl;
    cout << "г) Значение x = (sqrt(7)+13)/(sqrt(13)+7)+(sqrt(12)+15)/(sqrt(15)+12)+(sqrt(21)+32)/(sqrt(32)+21) = " << resultD << endl;

    return 0;
}


