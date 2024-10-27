#include <iostream>
#include <string>

using namespace std;

// Функція перевіряє, чи є символ літерою
bool IsLetter(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

// Функція, яка робить першу літеру слова великою, якщо це слово стоїть після крапки
string CapitalizeAfterPeriod(const string& s) {
    string result = s;
    bool capitalizeNext = false; // Прапор для перетворення першої літери після крапки

    for (size_t i = 0; i < result.length(); ++i) {
        if (result[i] == '.') {
            capitalizeNext = true; // Встановити прапор після крапки
        }
        else if (capitalizeNext && IsLetter(result[i])) {
            result[i] = toupper(result[i]); // Перетворення на велику літеру
            capitalizeNext = false; // Скидання прапора після першої літери
        }
        else if (result[i] != ' ' && result[i] != '.') {
            capitalizeNext = false; // Скидання прапора, якщо зустріли символ не після крапки
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter string:" << endl;
    getline(cin, input);

    string result = CapitalizeAfterPeriod(input);
    cout << "odified string: " << result << endl;

    return 0;
}
