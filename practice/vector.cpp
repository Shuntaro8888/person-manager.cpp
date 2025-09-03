#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << "Initial vector contents:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }

    vec.pop_back();
    cout << "After pop_back:" << endl;
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        if (*it % 2 == 0) {
            cout << *it << " is even." << endl;
            *it = 0; // Set even numbers to zero
        } else {
            cout << *it << " is odd." << endl;
        }
    }

    cout << "Final vector contents:" << endl;
    for (const auto& value : vec) {
        cout << value << endl;
    }
    cout << "Vector size: " << vec.size() << endl;

    return 0;
}