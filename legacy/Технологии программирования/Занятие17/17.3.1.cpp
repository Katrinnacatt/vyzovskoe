//ИСТ-331 Числова 17.3.1
#include <iostream>
#include <string>

using namespace std;

// Определение класса Computer
class Computer {
private:
    string model; // Модель компьютера
    string processor; // Процессор компьютера
    int ram; // Объем оперативной памяти в гигабайтах

public:
    // Конструктор класса Computer для инициализации полей объекта
    Computer(string model, string processor, int ram) : model(model), processor(processor), ram(ram) {}

    // Метод для получения объема оперативной памяти
    int getRAM() const { return ram; }

    // Метод для отображения информации о компьютере
    void displayInfo() const {
        cout << "Модель: " << model << endl;
        cout << "Процессор: " << processor << endl;
        cout << "Объем оперативной памяти: " << ram << " ГБ" << endl;
    }
};

// Функция для поиска компьютера с наибольшим объемом оперативной памяти
Computer findLargestRAM(const Computer computers[], int size) {
    Computer largest = computers[0]; // Инициализация компьютера с наибольшим объемом оперативной памяти
    for (int i = 1; i < size; ++i) {
        // Если текущий компьютер имеет больший объем оперативной памяти, чем компьютер с наибольшим, обновляем значение
        if (computers[i].getRAM() > largest.getRAM()) {
            largest = computers[i];
        }
    }
    return largest; // Возвращаем компьютер с наибольшим объемом оперативной памяти
}

// Функция main
int main() {
    setlocale(LC_ALL, "Russian");

    // Массив из 6 объектов класса Computer
    Computer computers[6] = {
        Computer("Dell", "Intel Core i5", 8),
        Computer("HP", "AMD Ryzen 7", 16),
        Computer("Lenovo", "Intel Core i7", 12),
        Computer("Asus", "Intel Core i3", 4),
        Computer("Acer", "AMD Ryzen 5", 6),
        Computer("Apple", "Apple M1", 16)
    };

    int choice; // Переменная для хранения выбора пользователя
    // Цикл для отображения меню и обработки выбора пользователя
    do {
        cout << "Меню:" << endl;
        cout << "1. Показать информацию о всех компьютерах" << endl;
        cout << "2. Найти компьютер с наибольшим объемом оперативной памяти" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        // Обработка выбора пользователя
        switch (choice) {
            case 1:
                // Отображение информации о всех компьютерах
                for (int i = 0; i < 6; ++i) {
                    cout << "Компьютер " << i + 1 << ":" << endl;
                    computers[i].displayInfo();
                    cout << endl;
                }
                break;
            case 2:
                {
                    // Поиск и отображение компьютера с наибольшим объемом оперативной памяти
                    Computer largest = findLargestRAM(computers, 6);
                    cout << "Компьютер с наибольшим объемом оперативной памяти:" << endl;
                    largest.displayInfo();
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
