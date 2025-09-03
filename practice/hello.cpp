#include <iostream>
using namespace std;

int main() {
    cout << "Hello, C++" << endl;

    int x, y;
    cin >> x >> y;

    cout << "Sum: " << x + y << endl;

    cout << "年齢を教えてください" << endl;

    int age;
    cin >> age;
    cout << "あなたの年齢は " << age << " 歳です。" << endl;

    if (age >= 20 && age < 65) {
        cout << "あなたは成人です。" << endl;
    } else if (age >= 65) {
        cout << "あなたは高齢者です。" << endl;
    } else {
        cout << "あなたは未成年です。" << endl;
    }

    return 0;
}