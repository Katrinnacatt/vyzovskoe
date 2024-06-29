#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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
    int* quantity; // указатель на массив количества товаров заданной фирмы
public:
    Paper(const string& b) : Stationery(b) {
        quantity = new int[5]; // выделение памяти под массив
        for (int i = 0; i < 5; ++i) {
            quantity[i] = rand() % 100 + 1; // заполнение массива случайными значениями
        }
    }
    ~Paper() { delete[] quantity; } // деструктор
    int* getQuantity() const { return quantity; } // получить указатель на количество товаров
    friend int countBrandItems(const Paper* papers, const string& targetBrand);
};

// Производный класс - авторучка
class Pen : public Stationery {
    int* quantity; // указатель на массив количества товаров заданной фирмы
public:
    Pen(const string& b) : Stationery(b) {
        quantity = new int[5]; // выделение памяти под массив
        for (int i = 0; i < 5; ++i) {
            quantity[i] = rand() % 100 + 1; // заполнение массива случайными значениями
        }
    }
    ~Pen() { delete[] quantity; } // деструктор
    int* getQuantity() const { return quantity; } // получить указатель на количество товаров
    friend int countBrandItems(const Pen* pens, const string& targetBrand);
};

// Дружественная функция для подсчета общего количества товаров заданной фирмы
int countBrandItems(const Paper* papers, const string& targetBrand) {
    int total = 0;
    for (int i = 0; i < 5; ++i) {
        if (papers[i].getBrand() == targetBrand) {
            total += papers[i].getQuantity()[i]; // здесь исправление
        }
    }
    return total;
}

// Дружественная функция для подсчета общего количества товаров заданной фирмы
int countBrandItems(const Pen* pens, const string& targetBrand) {
    int total = 0;
    for (int i = 0; i < 5; ++i) {
        if (pens[i].getBrand() == targetBrand) {
            total += pens[i].getQuantity()[i]; // здесь исправление
        }
    }
    return total;
}

int main() {
    setlocale(LC_ALL, "Russian");
    
    srand(static_cast<unsigned int>(time(0)));

    // Создаем несколько объектов производных классов
    Paper papers[5] = { Paper("PaperA"), Paper("PaperB"), Paper("PaperC"), Paper("PaperD"), Paper("PaperE") };
    Pen pens[5] = { Pen("PenA"), Pen("PenB"), Pen("PenC"), Pen("PenD"), Pen("PenE") };

    // Выводим информацию о каждой фирме и их товарах
    cout << "Информация о товарах:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Фирма: " << papers[i].getBrand() << endl;
        cout << "Количество бумаги: " << papers[i].getQuantity()[i] << endl;
        cout << "Количество авторучек: " << pens[i].getQuantity()[i] << endl;
        cout << endl;
    }

    // Задаем фирму для подсчета общего количества товаров
    string targetBrand = "PaperA";

    // Подсчитываем общее количество товаров заданной фирмы
    int totalPaperQuantity = countBrandItems(papers, targetBrand);
    int totalPenQuantity = countBrandItems(pens, targetBrand);

    // Выводим общее количество товаров заданной фирмы
    cout << "Общее количество бумаги фирмы " << targetBrand << ": " << totalPaperQuantity << endl;
    cout << "Общее количество авторучек фирмы " << targetBrand << ": " << totalPenQuantity << endl;

    return 0;
}
