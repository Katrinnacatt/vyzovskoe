//331 Числова 8.4
#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <cmath>
using namespace std;

// Функция для проверки на простоту числа
bool prost(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int i;
    cout << "Все трехзначные простые числа:\n";
    for (i = 100; i <= 999; ++i) {
        if (prost(i)) {
            cout << i << " ";
        }
    }
    return 0;
}

