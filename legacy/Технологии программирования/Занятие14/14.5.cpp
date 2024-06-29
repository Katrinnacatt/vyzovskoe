#include <iostream>
#include <string>

using namespace std;

// Функция, которая преобразует первую букву строки в верхний регистр
void capitalizeFirstLetter(string &str) {
    if (!str.empty()) {
        str[0] = toupper(str[0]); // Преобразуем первую букву в верхний регистр
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    string text = "In the town lived a man. he sailed to sea. and he told us of his life in the land of submarines. we all live in a yellow submarine. we all live in a yellow submarine.";

    // Разделение текста на предложения
    string delimiter = ". ";
    size_t pos = 0;
    string sentence;
    while ((pos = text.find(delimiter)) != string::npos) {
        sentence = text.substr(0, pos); // Выделяем предложение
        capitalizeFirstLetter(sentence); // Преобразуем первую букву в верхний регистр
        cout << sentence << "." << endl; // Выводим предложение с точкой и переносом строки
        text.erase(0, pos + delimiter.length()); // Удаляем обработанное предложение из текста
    }

    return 0;
}
