#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip> // Для установки вывода с плавающей точкой

// Включаем библиотеку для русификации
#include <locale>

using namespace std;

// Создаем структуру данных для страны
struct Strana {
    string name;
    double lifeExpectancy;
    int population;
    double area;
    double populationDensity;
};

// Функция для вычисления плотности населения
double calculatePopulationDensity(int population, double area) {
    return population / area;
}

int main() {
    // Устанавливаем русскую локаль
    setlocale(LC_ALL, "Russian");

    // Открываем файл для чтения
    ifstream inputFile("strana.txt");
    if (!inputFile) {
        cerr << "Не удалось открыть файл strana.txt" << endl;
        return 1;
    }

    // Читаем данные из файла и заполняем структуры Strana
    vector<Strana> countries;
    string name;
    double lifeExpectancy, area;
    int population;
    while (inputFile >> name >> lifeExpectancy >> population >> area) {
        Strana country;
        country.name = name;
        country.lifeExpectancy = lifeExpectancy;
        country.population = population;
        country.area = area;
        country.populationDensity = calculatePopulationDensity(population, area);
        countries.push_back(country);
    }
    inputFile.close();

    // Открываем файл для записи результатов
    ofstream outputFile("Plotn.txt");
    if (!outputFile) {
        cerr << "Не удалось создать файл Plotn.txt" << endl;
        return 1;
    }

    // Выводим результаты вычислений в файл
    outputFile << fixed << setprecision(2); // Устанавливаем вывод с двумя знаками после запятой
    for (const auto& country : countries) {
        outputFile << country.name << ": " << country.populationDensity << " чел/км²" << endl;
    }
    outputFile.close();

    // Находим страну с наибольшей продолжительностью жизни населения
    Strana maxLifeCountry = countries[0];
    for (const auto& country : countries) {
        if (country.lifeExpectancy > maxLifeCountry.lifeExpectancy) {
            maxLifeCountry = country;
        }
    }

    // Выводим информацию о стране с наибольшей продолжительностью жизни населения на экран
    cout << "Страна с наибольшей продолжительностью жизни населения:" << endl;
    cout << "Название: " << maxLifeCountry.name << endl;
    cout << "Площадь: " << maxLifeCountry.area << " км²" << endl;
    cout << "Население: " << maxLifeCountry.population << " человек" << endl;
    cout << "Продолжительность жизни населения: " << maxLifeCountry.lifeExpectancy << " лет" << endl;

    return 0;
}
