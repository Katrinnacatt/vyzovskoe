//331 Числова 14.1
#include <iostream>
#include <string>

using namespace std;

string removeConsecutiveDuplicates(const string & str, int length) {
    string result;
    char prev_char = '\0'; // Предыдущий символ

    // Проходим по всем символам в строке
    for (int i = 0; i < length; ++i) {
        char current_char = str[i];
        // Добавляем текущий символ в результат, если он отличается от предыдущего
        if (current_char != prev_char) {
            result.push_back(current_char);
            prev_char = current_char; // Обновляем предыдущий символ
        }
    }

    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");
    string input = "876777444003444";
    int length = input.length(); // Получаем длину строки
    string output = removeConsecutiveDuplicates(input, length);
    cout << "Исходная строка: " << input << endl;
    cout << "Результат: " << output << endl;
    return 0;
}
