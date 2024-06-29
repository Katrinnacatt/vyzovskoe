//331 Числова 13.4
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm> // Для использования функции std::min_element
#include <climits>   // Для использования INT_MAX

using namespace std;

// Функция для выполнения "Типовой операции"
void printDataForDivision(const string& divisionName, const vector<string>& names, const vector<int>& payments) {
    cout << "Структурное подразделение: " << divisionName << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "ФИО                                          Взносы" << endl;
    cout << "----------------------------------------------------" << endl;
    for (size_t i = 0; i < names.size(); ++i) {
        cout << names[i] << "           " << payments[i] << endl;
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    ifstream namesFiles[] = {ifstream("11.txt"), ifstream("21.txt"), ifstream("31.txt")};
    ifstream paymentsFiles[] = {ifstream("12.txt"), ifstream("22.txt"), ifstream("32.txt")};

    ofstream result("result.txt");

    for (int i = 0; i < 3; ++i) {
        if (!namesFiles[i].is_open() || !paymentsFiles[i].is_open()) {
            cout << "Ошибка открытия файлов!" << endl;
            return 1;
        }
    }

    vector<string> divisionNames;
    vector<vector<string>> allNames(3);
    vector<vector<int>> allPayments(3);
    vector<int> minPayments(3, INT_MAX); // Вектор для хранения минимального значения уплаченных взносов

    // Чтение данных из файлов и сохранение их в векторы
    for (int i = 0; i < 3; ++i) {
        string divisionName;
        getline(namesFiles[i], divisionName);
        divisionNames.push_back(divisionName);

        string name;
        while (getline(namesFiles[i], name)) {
            allNames[i].push_back(name);
        }

        int payment;
        while (paymentsFiles[i] >> payment) {
            allPayments[i].push_back(payment);
            minPayments[i] = min(minPayments[i], payment); // Находим минимальный взнос для текущего подразделения
        }
    }

    // Запись данных в новый файл итоговой ведомости
    for (int i = 0; i < 3; ++i) {
        result << "Структурное подразделение: " << divisionNames[i] << endl;
        result << "----------------------------------------------------" << endl;
        result << "ФИО                                          Взносы" << endl;
        result << "----------------------------------------------------" << endl;
        for (size_t j = 0; j < allNames[i].size(); ++j) {
            result << allNames[i][j] << "\t\t" << allPayments[i][j] << endl;
        }
        // Вывод минимального значения уплаченных взносов для текущего подразделения
        result << "----------------------------------------------------" << endl;
        result << "Минимальное значение уплаченных взносов: " << minPayments[i] << endl;
        result << endl;
    }

    // Закрытие всех файлов
    result.close();
    for (int i = 0; i < 3; ++i) {
        namesFiles[i].close();
        paymentsFiles[i].close();
    }

    cout << "Программа завершила работу. Информация находится в файле 'result.txt'." << endl;

    return 0;
}
