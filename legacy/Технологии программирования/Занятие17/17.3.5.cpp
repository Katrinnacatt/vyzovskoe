//ИСТ-331 Числова 17.3.5
#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Document {
private:
    string type; // Тип документа
    int issuedLastYear; // Количество документов, выданных в прошлом году

public:
    // Конструктор класса Document
    Document(string type, int issuedLastYear) : type(type), issuedLastYear(issuedLastYear) {}

    // Метод для получения количества документов, выданных в прошлом году
    int getIssuedLastYear() const {
        return issuedLastYear;
    }

    // Метод для отображения информации о документе
    void displayInfo() const {
        cout << "Тип документа: " << type << endl;
        cout << "Количество документов, выданных в прошлом году: " << issuedLastYear << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    // Создание массива из 6 объектов класса Document
    Document documents[6] = {
        Document("Паспорт", 5000),
        Document("Водительское удостоверение", 3500),
        Document("Свидетельство о рождении", 7000),
        Document("Справка с места работы", 2500),
        Document("Удостоверение личности", 4000),
        Document("Вид на жительство", 1200)
    };

    int choice; // Переменная для хранения выбора пользователя
    // Цикл для отображения меню и обработки выбора пользователя
    do {
        cout << "\nМеню:" << endl;
        cout << "1. Показать информацию о всех документах" << endl;
        cout << "2. Рассчитать количество документов, выданных в прошлом году для каждого документа" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";

        // Проверка корректности введенных данных
        while (!(cin >> choice) || (choice < 0 || choice > 2)) {
            cin.clear(); // Очистка флага ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера ввода
            cout << "Ошибка ввода. Пожалуйста, введите 0, 1 или 2: ";
        }

        // Обработка выбора пользователя
        switch (choice) {
            case 1:
                // Отображение информации о всех документах
                for (int i = 0; i < 6; ++i) {
                    cout << "\nДокумент " << i + 1 << ":" << endl;
                    documents[i].displayInfo();
                }
                break;
            case 2:
                // Расчет и отображение количества документов, выданных в прошлом году для каждого документа
                cout << "\nКоличество документов, выданных в прошлом году для каждого документа:" << endl;
                for (int i = 0; i < 6; ++i) {
                    cout << "Документ " << i + 1 << ": " << documents[i].getIssuedLastYear() << endl;
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
