#include <fstream>
#include "classnobject.hpp"
#include <vector>
#include <sstream>

int main(){
    ifstream infile("sample.txt");
    if(!infile){
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    vector<Person> people;

    string line;
    while(getline(infile, line)){
        cout << "読み込んだ行：" << line << endl;
        stringstream ss(line);
        string name;
        string ageStr;

        // カンマ区切りで分解
        getline(ss, name, ',');
        getline(ss, ageStr, ',');

        int age = stoi(ageStr);
        people.emplace_back(name, age);
    }

    for (const auto& person : people) {
        person.display();
    }

    infile.close();

    return 0;
}