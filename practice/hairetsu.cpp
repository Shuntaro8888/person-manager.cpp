#include <iostream>
using namespace std;

int main(){

    int arr[5];
    cout << "5つの整数を入力してください: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "入力された整数の合計: " << sum << endl;
    cout << "入力された整数の平均: " << double(sum) / 5.0 << endl;

    int max = arr[0], min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "入力された整数の最大値: " << max << endl;
    cout << "入力された整数の最小値: " << min << endl;

    return 0;
}