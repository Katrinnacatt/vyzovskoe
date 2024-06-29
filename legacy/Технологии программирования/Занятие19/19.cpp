//331 Числова 19.1
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

// Базовый класс - канцелярские товары
class Stationery {
protected:
    string brand; // бренд
public:
    Stationery(const string& b) : brand(b) {} // конструктор
    virtual ~Stationery() {} // виртуальный деструктор
    string getBrand() const { return brand; } // получить бренд
};

// Производный класс - бумага
class Paper : public Stationery {
    int quantity; // количество товаров заданной фирмы
public:
    Paper(const string& b) : Stationery(b), quantity(rand() % 100 + 1) {} // конструктор
    Paper(const Paper& other) : Stationery(other.brand), quantity(other.quantity) {} // конструктор копирования
    int getQuantity() const { return quantity; } // получить количество товаров

    // Перегрузка оператора + для суммирования количества бумаги
    Paper operator+(const Paper& other) const {
        Paper result(brand);
        result.quantity = this->quantity + other.quantity;
        return result;
    }
};

// Производный класс - авторучка
class Pen : public Stationery {
    int quantity; // количество товаров заданной фирмы
public:
    Pen(const string& b) : Stationery(b), quantity(rand() % 50 + 1) {} // конструктор
    Pen(const Pen& other) : Stationery(other.brand), quantity(other.quantity) {} // конструктор копирования
    int getQuantity() const { return quantity; } // получить количество товаров

    // Перегрузка оператора + для суммирования количества авторучек
    Pen operator+(const Pen& other) const {
        Pen result(brand);
        result.quantity = this->quantity + other.quantity;
        return result;
    }
};

// Дружественная функция для подсчета общего количества бумаги заданного бренда
int countBrandItems(const vector<Paper>& papers, const string& targetBrand) {
    int total = 0;
    for (const auto& paper : papers) {
        if (paper.getBrand() == targetBrand) {
            total += paper.getQuantity();
        }
    }
    return total;
}

// Дружественная функция для подсчета общего количества авторучек заданного бренда
int countBrandItems(const vector<Pen>& pens, const string& targetBrand) {
    int total = 0;
    for (const auto& pen : pens) {
        if (pen.getBrand() == targetBrand) {
            total += pen.getQuantity();
        }
    }
    return total;
}

// Функция для вывода информации о бумаге
void printPaperInfo(const vector<Paper>& papers) {
    cout << "Информация о бумаге:" << endl;
    for (const auto& paper : papers) {
        cout << "Фирма: " << paper.getBrand() << endl;
        cout << "Количество бумаги: " << paper.getQuantity() << endl;
        cout << endl;
    }
}

// Функция для вывода информации об авторучках
void printPenInfo(const vector<Pen>& pens) {
    cout << "Информация о авторучках:" << endl;
    for (const auto& pen : pens) {
        cout << "Фирма: " << pen.getBrand() << endl;
        cout << "Количество авторучек: " << pen.getQuantity() << endl;
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    srand(static_cast<unsigned int>(time(0)));

    vector<Paper> papers;
    vector<Pen> pens;

    // Инициализация данных
    papers.emplace_back("PaperA");
    papers.emplace_back("PaperB");
    papers.emplace_back("PaperC");
    papers.emplace_back("PaperD");
    papers.emplace_back("PaperE");
    papers.emplace_back("PaperF");
    papers.emplace_back("PaperG");
    papers.emplace_back("PaperH");

    pens.emplace_back("PenA");
    pens.emplace_back("PenB");
    pens.emplace_back("PenC");
    pens.emplace_back("PenD");
    pens.emplace_back("PenE");
    pens.emplace_back("PenF");
    pens.emplace_back("PenG");
    pens.emplace_back("PenH");

    int choice;
    do {
        cout << "\nМеню:\n";
        cout << "1. Показать информацию о бумаге\n";
        cout << "2. Показать информацию об авторучках\n";
        cout << "3. Подсчитать общее количество бумаги заданной фирмы\n";
        cout << "4. Подсчитать общее количество авторучек заданной фирмы\n";
        cout << "5. Добавить новую бумагу\n";
        cout << "6. Добавить новую авторучку\n";
        cout << "7. Выйти\n";
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                printPaperInfo(papers);
                break;
            case 2:
                printPenInfo(pens);
                break;
            case 3: {
                string targetBrand;
                cout << "Введите фирму бумаги: ";
                cin >> targetBrand;
                int totalPaperQuantity = countBrandItems(papers, targetBrand);
                cout << "Общее количество бумаги фирмы " << targetBrand << ": " << totalPaperQuantity << endl;
                break;
            }
            case 4: {
                string targetBrand;
                cout << "Введите фирму авторучек: ";
                cin >> targetBrand;
                int totalPenQuantity = countBrandItems(pens, targetBrand);
                cout << "Общее количество авторучек фирмы " << targetBrand << ": " << totalPenQuantity << endl;
                break;
            }
            case 5: {
                string brand;
                cout << "Введите фирму новой бумаги: ";
                cin >> brand;
                papers.emplace_back(brand);
                cout << "Новая бумага добавлена." << endl;
                break;
            }
            case 6: {
                string brand;
                cout << "Введите фирму новой авторучки: ";
                cin >> brand;
                pens.emplace_back(brand);
                cout << "Новая авторучка добавлена." << endl;
                break;
            }
            case 7:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор. Пожалуйста, попробуйте снова." << endl;
        }
    } while (choice != 7);

    return 0;
}
