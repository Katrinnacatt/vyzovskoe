//331 Числова 12.2
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    ifstream inputFile("data.txt");

    if (!inputFile.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    ofstream outputFile("rezult.txt");

    if (!outputFile.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    string fullName;
    int candidateNumber = 0; // Общий счетчик кандидатов
    int acceptedCandidates = 0; // Счетчик принятых кандидатов

    outputFile << "Список кандидатов на собеседование" << endl;

    while (getline(inputFile, fullName)) {
        candidateNumber++; // Увеличиваем номер кандидата
        cout << candidateNumber << " " << fullName << endl;

        char choice;
        cout << "Принять этого кандидата? (Y/N): ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y') {
            acceptedCandidates++; // Увеличиваем счетчик принятых кандидатов
            outputFile << acceptedCandidates << " " << fullName << endl;
        }
    }
    
    inputFile.close();
    outputFile.close();

    cout << "Файл rezult.txt успешно создан и заполнен!" << endl;

    return 0;
}