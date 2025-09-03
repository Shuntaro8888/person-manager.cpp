#include <iostream>
#include <random>
using namespace std;

void evaluatePerformance(int c) {
    if (c <= 5) {
        cout << "5回以内です！あなたは優秀です！" << endl;
    }
    else {
        cout << "6回以上かかりました。もう少し頑張りましょう！" << endl;
    }
}

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 9);
    int answer = dist(gen);
    int guess;
    int count = 1;
    cout << "1から9の数字を当ててください" << endl;
    while (true) {
        cin >> guess;
        if (guess == answer) {
            cout << "正解です！" << endl;
            break;
        } else {
            cout << "不正解です。もう一度試してください。" << endl;
        }
        count++;
    }
    cout << "あなたの試行回数: " << count << endl;
    evaluatePerformance(count);
    return 0;
}