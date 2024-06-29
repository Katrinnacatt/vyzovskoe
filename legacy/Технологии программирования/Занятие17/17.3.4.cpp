//ИСТ-331 Числова 17.3.4
#include <iostream>
#include <string>
#include <limits> // Для использования numeric_limits

using namespace std;

class SoftwareProduct {
private:
    string name; // Название программного продукта
    string version; // Версия программного продукта

public:
    // Конструктор класса SoftwareProduct
    SoftwareProduct(string name, string version) : name(name), version(version) {}

    // Метод для получения версии программного продукта
    const string& getVersion() const {
        return version;
    }

    // Метод для отображения информации о программном продукте
    void displayInfo() const {
        cout << "Название продукта: " << name << endl;
        cout << "Последняя версия: " << version << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    // Создание массива из 6 объектов класса SoftwareProduct
    SoftwareProduct products[6] = {
        SoftwareProduct("Microsoft Windows", "10.0.19042"),
        SoftwareProduct("Ubuntu", "20.04"),
        SoftwareProduct("Adobe Photoshop", "CC 2022"),
        SoftwareProduct("Google Chrome", "98.0.4758.102"),
        SoftwareProduct("Visual Studio Code", "1.65.0"),
        SoftwareProduct("Mozilla Firefox", "98.0")
    };

    int choice; // Переменная для хранения выбора пользователя
    // Цикл для отображения меню и обработки выбора пользователя
    do {
        cout << "\nМеню:" << endl;
        cout << "1. Показать информацию о всех программных продуктах" << endl;
        cout << "2. Показать последние версии всех программных продуктов" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";

        // Проверяем, было ли успешно считано значение и является ли оно целым числом
        while (!(cin >> choice)) {
            cin.clear(); // Очищаем флаг ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очищаем буфер ввода
            cout << "Ошибка ввода. Пожалуйста, введите целое число (0, 1, 2): ";
        }

        // Обработка выбора пользователя
        switch (choice) {
            case 1:
                // Отображение информации о всех программных продуктах
                for (int i = 0; i < 6; ++i) {
                    cout << "\nПрограммный продукт " << i + 1 << ":" << endl;
                    products[i].displayInfo();
                }
                break;
            case 2:
                // Отображение последних версий всех программных продуктов
                cout << "\nПоследние версии программных продуктов:" << endl;
                for (int i = 0; i < 6; ++i) {
                    cout << "Программный продукт " << i + 1 << ": " << products[i].getVersion() << endl;
                }
                break;
            case 0:
                cout << "Программа завершена." << endl;
                break;
            default:
                cout << "Недопустимый выбор! Пожалуйста, выберите 0, 1 или 2." << endl;
        }
    } while (choice != 0);

    return 0;
}
