//ИСТ-331 Числова 17.2
#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    double getX() const { return x; }
    double getY() const { return y; }

    friend double calculateRectangleArea(const Point& p1, const Point& p2, const Point& p3, const Point& p4);

    ~Point() {
        cout << "Уничтожение объекта Точка" << endl;
    }
};

double calculateRectangleArea(const Point& p1, const Point& p2, const Point& p3, const Point& p4) {
    double side1 = sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
    double side2 = sqrt(pow(p3.getX() - p2.getX(), 2) + pow(p3.getY() - p2.getY(), 2));
    return side1 * side2;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // Создание массива из 4 объектов класса Point
    Point points[4] = { Point(1.0, 1.0), Point(1.0, 4.0), Point(5.0, 4.0), Point(5.0, 1.0) };

    char choice;
    do {
        cout << "Введите 'c', чтобы показать координаты точек, 'd', чтобы показать расстояния между точками, или 'a', чтобы вычислить площадь прямоугольника (0 для выхода): ";
        cin >> choice;

        if (choice == 'c' || choice == 'C') {
            for (int i = 0; i < 4; ++i) {
                cout << "Точка " << i + 1 << ": x = " << points[i].getX() << ", y = " << points[i].getY() << endl;
            }
        }
        else if (choice == 'd' || choice == 'D') {
            cout << "Расстояния между точками:" << endl;
            for (int i = 0; i < 3; ++i) {
                for (int j = i + 1; j < 4; ++j) {
                    double distance = sqrt(pow(points[j].getX() - points[i].getX(), 2) + pow(points[j].getY() - points[i].getY(), 2));
                    cout << "Расстояния между точкой " << i + 1 << " и точкой " << j + 1 << " равняется " << distance << endl;
                }
            }
        }
        else if (choice == 'a' || choice == 'A') {
            double area = calculateRectangleArea(points[0], points[1], points[2], points[3]);
            cout << "Площадь прямоугольника: " << area << endl;
        }
        else if (choice != '0') {
            cout << "Недопустимый выбор!" << endl;
        }
    } while (choice != '0');

    return 0;
}
