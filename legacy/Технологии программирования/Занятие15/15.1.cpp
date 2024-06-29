#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Структура для хранения информации о человеке
struct Person {
    string surname;
    string name;
    string patronymic;
};

// Функция для объединения данных о человеке в одну строку
string combinePerson(const Person& person) {
    return person.surname + " " + person.name + " " + person.patronymic;
}

// Функция для считывания данных из файлов F.txt, I.txt и O.txt
bool readDataFromFile(const string& filename, vector<string>& data) {
    ifstream file(filename);
    if (!file) {
        cerr << "Ошибка открытия файла " << filename << "!" << endl;
        return false;
    }

    string line;
    while (getline(file, line)) {
        data.push_back(line);
    }

    file.close();
    return true;
}

// Функция для считывания данных из файлов и создания вектора людей
bool readPeopleData(const string& fileF, const string& fileI, const string& fileO, vector<Person>& people) {
    vector<string> surnames, names, patronymics;

    if (!readDataFromFile(fileF, surnames) || !readDataFromFile(fileI, names) || !readDataFromFile(fileO, patronymics)) {
        return false;
    }

    if (surnames.size() != names.size() || names.size() != patronymics.size()) {
        cerr << "Ошибка: количество строк в файлах не совпадает!" << endl;
        return false;
    }

    for (size_t i = 0; i < surnames.size(); ++i) {
        Person person;
        person.surname = surnames[i];
        person.name = names[i];
        person.patronymic = patronymics[i];
        people.push_back(person);
    }

    return true;
}

// Функция для сравнения двух объектов Person по фамилии
bool compareBySurname(const Person& person1, const Person& person2) {
    return person1.surname < person2.surname;
}

int main() {
    setlocale(LC_ALL, "Russian");
    vector<Person> people;

    // Считывание данных из файлов и создание вектора людей
    if (!readPeopleData("F.txt", "I.txt", "O.txt", people)) {
        return 1;
    }

    // Запись данных в файл otchet.txt
    ofstream outputFile("otchet.txt");
    if (!outputFile) {
        cerr << "Ошибка открытия файла otchet.txt!" << endl;
        return 1;
    }

    outputFile << "Список до сортировки\n";
    for (size_t i = 0; i < people.size(); ++i) {
        outputFile << i + 1 << "  " << combinePerson(people[i]) << endl;
    }

    // Сортировка людей по фамилии
    sort(people.begin(), people.end(), compareBySurname);

    outputFile << "\nСписок после сортировки по фамилии\n";
    for (size_t i = 0; i < people.size(); ++i) {
        outputFile << i + 1 << "  " << combinePerson(people[i]) << endl;
    }
    outputFile.close();

    cout << "Данные успешно записаны в файл otchet.txt." << endl;

    return 0;
}
