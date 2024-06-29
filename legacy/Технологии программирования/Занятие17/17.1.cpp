//ИСТ-331 Числова 17.1
#include <iostream>

using namespace std;

class Point {
private:
    double x;
    double y;

public:
    // Конструктор с параметрами
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    // Функции доступа к закрытым членам класса
    double getX() const { return x; }
    double getY() const { return y; }

    // Деструктор
    ~Point() {
        cout << "Объект точка уничтожен" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    // Создание двух объектов класса Point
    Point p1(3.5, 4.2);
    Point p2(-1.8, 2.9);

    // Демонстрация работы методов класса
    cout << "Точка 1: x = " << p1.getX() << ", y = " << p1.getY() << endl;
    cout << "Точка 2: x = " << p2.getX() << ", y = " << p2.getY() << endl;

    return 0;
}
