//ИСТ-331 Числова 17.3.2
#include <iostream>
#include <string>
#include <limits> // Для использования numeric_limits

using namespace std;

class LocalNetwork {
private:
    string provider; // Название провайдера
    int numberOfDevices; // Количество устройств
    double installationCostPerDevice; // Стоимость установки на одно устройство

public:
    // Конструктор класса LocalNetwork для инициализации полей объекта
    LocalNetwork(string provider, int numberOfDevices, double installationCostPerDevice) : provider(provider), numberOfDevices(numberOfDevices), installationCostPerDevice(installationCostPerDevice) {}

    // Метод для расчета общей стоимости монтажа сети
    double calculateInstallationCost() const {
        return numberOfDevices * installationCostPerDevice;
    }

    // Метод для отображения информации о локальной сети
    void displayInfo() const {
        cout << "Провайдер: " << provider << endl;
        cout << "Количество устройств: " << numberOfDevices << endl;
        cout << "Стоимость установки на одно устройство: " << installationCostPerDevice << " руб." << endl;
    }
};

// Функция для поиска локальной сети с минимальной стоимостью монтажа
LocalNetwork findCheapestInstallation(const LocalNetwork networks[], int size) {
    LocalNetwork cheapest = networks[0]; // Инициализация самой дешевой сети
    for (int i = 1; i < size; ++i) {
        // Если текущая сеть имеет меньшую стоимость монтажа, чем самая дешевая, обновляем значение
        if (networks[i].calculateInstallationCost() < cheapest.calculateInstallationCost()) {
            cheapest = networks[i];
        }
    }
    return cheapest; // Возвращаем самую дешевую сеть
}

int main() {
    setlocale(LC_ALL, "Russian");

    // Создание массива из 6 объектов класса LocalNetwork
    LocalNetwork networks[6] = {
        LocalNetwork("Ростелеком", 10, 500),
        LocalNetwork("МТС", 15, 450),
        LocalNetwork("Билайн", 8, 600),
        LocalNetwork("Мегафон", 12, 550),
        LocalNetwork("Дом.ru", 20, 400),
        LocalNetwork("Йота", 18, 480)
    };

    int choice; // Переменная для хранения выбора пользователя
    // Цикл для отображения меню и обработки выбора пользователя
    do {
        cout << "\nМеню:" << endl;
        cout << "1. Показать информацию о всех локальных сетях" << endl;
        cout << "2. Найти локальную сеть с минимальной стоимостью монтажа" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";
        
        // Проверка на корректность введенных данных
        while (!(cin >> choice)) {
            cin.clear(); // Сброс флага ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера ввода
            cout << "Некорректный ввод. Пожалуйста, введите целое число (0, 1, 2): ";
        }

        // Обработка выбора пользователя
        switch (choice) {
            case 1:
                // Отображение информации о всех локальных сетях
                for (int i = 0; i < 6; ++i) {
                    cout << "\nЛокальная сеть " << i + 1 << ":" << endl;
                    networks[i].displayInfo();
                }
                break;
            case 2:
                // Поиск и отображение локальной сети с минимальной стоимостью монтажа
                {
                    LocalNetwork cheapest = findCheapestInstallation(networks, 6);
                    cout << "\nЛокальная сеть с минимальной стоимостью монтажа:" << endl;
                    cheapest.displayInfo();
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
