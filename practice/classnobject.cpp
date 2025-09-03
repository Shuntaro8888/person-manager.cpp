#include <fstream>
#include "classnobject.hpp"

int main(){
    fstream file;
    file.open("sample.txt", ios::out);
    if(!file){
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    Person p1("Alice", 30);
    p1.display();
    file << p1.getName() << "," << p1.getAge() << endl;

    Friend f1("Bob", 25);
    f1.display();
    file << f1.getName() << "," << f1.getAge() << endl;

    BestFriend bf1("Charlie", 28);
    bf1.display();
    file << bf1.getName() << "," << bf1.getAge() << endl;

    file.close();

    file.open("sample.txt", ios::in);
    if(!file){
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    string line;
    while(getline(file, line)){
        cout << "読み込んだ行：" << line << endl;
    }

    file.close();

    return 0;
}