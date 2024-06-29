//331 Числова 5.2
#include <iostream>
#include <cmath>
using namespace std;
string rom(int n) {
    string res = "";

    while (n >= 100) {
        res += "C";
        n -= 100;
    }
    while (n >= 90) {
        res += "XC";
        n -= 90;
    }
    while (n >= 50) {
        res += "L";
        n -= 50;
    }
    while (n >= 40) {
        res += "XL";
        n -= 40;
    }
    while (n >= 10) {
        res += "X";
        n -= 10;
    }
    while (n >= 9) {
        res += "IX";
        n -= 9;
    }
    while (n >= 5) {
        res += "V";
        n -= 5;
    }
    while (n >= 4) {
        res += "IV";
        n -= 4;
    }
    while (n >= 1) {
        res += "I";
        n -= 1;
    }
    return res;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int x;
    cout << "Введите число от 1 до 100: ";
    cin >> x;

    if (x < 1 || x > 100) {
        cout << "Неправильный ввод. Пожалуйста введите число от 1 до 100." << endl;
        return 1;
    }

    string romn = rom(x);
    cout << "Представление римскими цифрами: " << romn << endl;

    return 0;
}