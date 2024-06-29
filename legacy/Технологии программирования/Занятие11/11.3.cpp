//331 Числова 10.4
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функция для считывания чисел из файла в вектор
vector<int> readNumbersFromFile(const string &filename) {
    ifstream file(filename);
    vector<int> numbers;
    int num;
    while (file >> num) {
        numbers.push_back(num);
    }
    file.close();
    return numbers;
}

// Функция для записи протокола в файл
void writeProtocolToFile(const string &filename, const vector<int> &attempts) {
    ofstream file(filename, ios::app); // Открываем файл для дозаписи
    if (!file.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return;
    }
    
    for (int attempt : attempts) {
        file << attempt << " "; // Записываем каждую попытку в файл, разделяя пробелом
    }
    file << endl; // Добавляем символ новой строки для разделения попыток
    file.close(); // Закрываем файл
}

// Функция для предложения сыграть еще раз
char Predlog() {
    char play_again;
    cout << "Хотите сыграть еще раз? (Y - Да, N - Нет): ";
    cin >> play_again;
    return play_again;
}

int main() {
    setlocale(LC_ALL, "Russian");
    
    int N = 3; // Диапазон случайных чисел [0, N]
    srand(time(0)); 
    
    do {
        ofstream file("data.txt");
        
        // Проверяем, успешно ли открылся файл
        if (!file.is_open()) {
            cout << "Ошибка открытия файла!" << endl;
            return 1;
        }
    
        // Заполняем файл случайными числами от 0 до N
        for (int i = 0; i < 10; ++i) { 
            int random_number = rand() % (N + 1); // Генерируем случайное число от 0 до N
            file << random_number << " "; // Записываем число в файл, разделяя пробелом
        }
    
        // Закрываем файл
        file.close();
    
        cout << "Файл data.txt успешно создан и заполнен!" << endl;
        
        // Считываем числа из файла в массив
        vector<int> numbers = readNumbersFromFile("data.txt");

        // Проверяем, успешно ли считались числа из файла
        if (numbers.empty()) {
            cout << "Ошибка чтения чисел из файла!" << endl;
            return 1;
        }

        // Выбираем случайное число из массива
        int random_index = rand() % numbers.size();
        int random_number = numbers[random_index];

        cout << "Для выхода из игры напишите -1" << endl;
        
        // Создаем вектор для записи попыток пользователя
        vector<int> attempts;
        
        int guess;
        do {
            cout << "Введите ваш вариант: ";
            cin >> guess;
            
            if (guess == -1) {
                cout << "Выход из игры." << endl;
                break;
            }
            
            if (guess < 0 || guess > N) {
                cout << "Число должно быть в диапазоне от 0 до " << N << ". Попробуйте еще раз." << endl;
                continue;
            }
            
            attempts.push_back(guess); // Добавляем попытку в вектор
            
            if (guess < random_number) {
                cout << "Загаданное число больше. Попробуйте еще раз." << endl;
            } else if (guess > random_number) {
                cout << "Загаданное число меньше. Попробуйте еще раз." << endl;
            } else {
                cout << "Поздравляем! Вы угадали число!" << endl;
                break;
            }
        } while (true);
        
        // Записываем протокол в файл
        writeProtocolToFile("protocol.txt", attempts);
        
        // Предложение сыграть еще раз
        char play_again;
        do {
            play_again = Predlog();
            if (play_again == 'N' || play_again == 'n') {
                cout << "Спасибо за игру! До свидания." << endl;
                return 0;
            } else if (play_again != 'Y' && play_again != 'y') {
                cout << "Ошибка! Неправильный ввод, попробуйте еще раз." << endl;
            }
        } while (play_again != 'Y' && play_again != 'y');
        
    } while (true);
    
    return 0;
}