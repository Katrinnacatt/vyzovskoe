//ИСТ-331 Числова 17.3.3
#include <iostream>
#include <string>
#include <limits> // Для использования numeric_limits

using namespace std;

class Vehicle {
private:
    string brand;
    string model;
    double fuelTankCapacity; // Объем бензобака в литрах
    double fuelConsumption;  // Расход топлива на 100 км в литрах

public:
    Vehicle(string brand, string model, double fuelTankCapacity, double fuelConsumption) : brand(brand), model(model), fuelTankCapacity(fuelTankCapacity), fuelConsumption(fuelConsumption) {}

    double calculateMaxRange() const {
        return (fuelTankCapacity / fuelConsumption) * 100; // Пробег на полном бензобаке в км
    }

    void displayInfo() const {
        cout << "Марка: " << brand << endl;
        cout << "Модель: " << model << endl;
        cout << "Объем бензобака: " << fuelTankCapacity << " л" << endl;
        cout << "Расход топлива: " << fuelConsumption << " л/100 км" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Vehicle vehicles[6] = {
        Vehicle("Toyota", "Corolla", 50, 7.2),
        Vehicle("BMW", "X5", 80, 9.8),
        Vehicle("Audi", "A4", 60, 8.5),
        Vehicle("Ford", "Focus", 55, 6.8),
        Vehicle("Mercedes-Benz", "E-Class", 70, 8.9),
        Vehicle("Honda", "Civic", 45, 6.2)
    };

    int choice;
    do {
        cout << "\nМеню:" << endl;
        cout << "1. Показать информацию о всех транспортных средствах" << endl;
        cout << "2. Рассчитать максимальный пробег на полном бензобаке для каждого транспортного средства" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";

        // Проверяем, было ли успешно считано значение и является ли оно целым числом
        while (!(cin >> choice)) {
            cin.clear(); // Очищаем флаг ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очищаем буфер ввода
            cout << "Ошибка ввода. Пожалуйста, введите целое число (0,1,2): ";
        }

        switch (choice) {
            case 1:
                for (int i = 0; i < 6; ++i) {
                    cout << "\nТранспортное средство " << i + 1 << ":" << endl;
                    vehicles[i].displayInfo();
                }
                break;
            case 2:
                cout << "\nМаксимальный пробег на полном бензобаке для каждого транспортного средства:" << endl;
                for (int i = 0; i < 6; ++i) {
                    cout << "Транспортное средство " << i + 1 << ": " << vehicles[i].calculateMaxRange() << " км" << endl;
                }
                break;
            case 0:
                cout << "Программа завершена." << endl;
                break;
            default:
                cout << "Недопустимый выбор! Попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}
