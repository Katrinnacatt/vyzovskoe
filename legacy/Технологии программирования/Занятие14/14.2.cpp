//331 Числова 14.2
#include <iostream>
#include <fstream>
#include <cstring> // Для функции strcmp
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string passwordFromFile, enteredPassword;
    
    // Открытие файла с паролем
    ifstream inputFile("password.txt");
    
    // Проверка на успешное открытие файла
    if (!inputFile.is_open()) {
        cout << "Не удалось открыть файл с паролем." << endl;
        return 1; // Возвращаем код ошибки
    }
    
    // Чтение пароля из файла
    getline(inputFile, passwordFromFile);
    
    // Закрытие файла
    inputFile.close();
    
    // Повторяем запрос пароля с клавиатуры до тех пор, пока пароль не будет верным
    do {
        // Запрос пароля с клавиатуры
        cout << "Введите пароль: ";
        cin >> enteredPassword;
        
        // Сравнение паролей
        int comparisonResult = strcmp(enteredPassword.c_str(), passwordFromFile.c_str());
        if (comparisonResult == 0) {
            cout << "Верный пароль!" << endl;
            break; // Выходим из цикла, если пароль верный
        } else {
            cout << "Неверный пароль. Попробуйте еще раз." << endl;
        }
    } while (true); // Бесконечный цикл, пока не будет верный пароль
    
    return 0;
}

