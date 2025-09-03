#include <iostream>
using namespace std;

int main() {
    int i = 1, j = 1;
    while (i < 10){
        while (j < 10){
            cout << i << " * " << j << " = " << i * j << endl;
            j++;
        }
        i++;
        j = 1;
    }
    return 0;
}