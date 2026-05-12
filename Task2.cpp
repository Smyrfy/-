#include <iostream>
#include <string>
using namespace std;

string encrypt(string s) {
    string result = "";
    int sum = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            sum += (s[i] - 'A' + 1);
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            if (sum > 0) {
                result += to_string(sum);
                sum = 0;
            }
            result += s[i];
        }
        else {
            return "Помилка: некоректний символ";
        }
    }
    if (sum > 0) {
        result += to_string(sum);
    }

    return result;
}

int main() {
    string s;
    cout << "Введіть рядок: ";
    cin >> s;

    cout << "Результат: " << encrypt(s) << endl;

    return 0;
}
