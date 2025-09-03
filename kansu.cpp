#include <iostream>
using namespace std;

int a(int x, int y){
    return x + y;
}

int b(int x, int y){
    return x - y;
}

int c(int x, int y){
    return x * y;
}

double d(double x,int y){
    return x / y;
}

int main() {
    int x, y;
    cout << "整数を2つ入力してください: " << endl;
    cin >> x >> y;
    cout << "和: " << a(x, y) << endl;
    cout << "差: " << b(x, y) << endl;
    cout << "積: " << c(x, y) << endl;
    cout << "商: " << d(x, y) << endl;
}