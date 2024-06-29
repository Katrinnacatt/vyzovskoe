#include <iostream>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    char strA[100], strB[] = "В проще, чем бросить курить – я сам проделывал это уже сотни раз.";
    char strC[] = "Марк Твен - известный американский писатель.";

    cout << "Введите строку A: ";
    cin.getline(strA, 100);

    int lengthA = strlen(strA);
    cout << "Строка A: " << strA << endl;
    cout << "Количество символов в строке A: " << lengthA << endl;

    strcat(strA, strB);
    cout << "Строка A после добавления строки B: " << strA << endl;
    cout << "Количество символов в строке A: " << strlen(strA) << endl;

    strncat(strA, strC, 10);
    cout << "Строка A после добавления 10 символов строки C: " << strA << endl;
    cout << "Количество символов в строке A: " << strlen(strA) << endl;

    return 0;
}