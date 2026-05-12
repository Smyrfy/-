#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть кількість чисел: ";
    cin >> n;

    int sum = 0;
    int x;

    for (int i = 0; i < n; i++) {
        cout << "Введіть число: ";
        cin >> x;

        // проста перевірка
        if (cin.fail()) {
            cout << "Помилка! Це не ціле число.\n";
            return 1;
        }

        sum += x;
    }

    cout << "Сума: " << sum << endl;

    return 0;
}
