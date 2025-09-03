#include <fstream>
#include <sstream>
#include <vector>
#include "integration.hpp"

vector<Person> people;
Person p("", 0);
string name;
int age;

//登録処理
void registerPerson(vector<Person>& people) {

    // 名前の入力とチェック
    do {
        cout << "名前を入力してください: ";
        getline(cin >> ws, name);
        if (name.empty()) {
            cout << "無効な名前です。再入力してください。\n" << endl;
        }
    } while (name.empty());

    // 年齢の入力とチェック
    do {
        cout << "年齢を入力してください: ";
        cin >> age;
        if (cin.fail() || age < 0 || age > 120) {
            cout << "無効な年齢です。再入力してください。\n" << endl;
            cin.clear(); // エラーフラグをクリア
            cin.ignore(1000, '\n'); // 入力バッファをクリア
            age = -1;
        }
    } while (age < 0 || age > 120);

    p.setName(name);
    p.setAge(age);
    people.emplace_back(p);
}

//File保存処理
void saveToFile(const vector<Person>& people) {
    ofstream ofs("people.txt");
    if (!ofs) {
        cerr << "Fileを開けませんでした。" << endl;
        return;
    }
    for (const auto& person : people) {
        ofs << person.getName() << "," << person.getAge() << endl;
    }
    ofs.close();
    cout << "dataを保存しました。" << endl;
}

//File読み込み処理
void readFile(){
    //現在のdataをclear
    people.clear();

    ifstream ifs("people.txt");
    if (!ifs) {
        cerr << "Fileを開けませんでした。" << endl;
        return;
    }
    string line;
    bool hasData = false;
    while (getline(ifs, line)) {
        if (!line.empty()) {
            hasData = true;
        }
        stringstream ss(line);
        string name;
        int age;
        if (getline(ss, name, ',') && (ss >> age)) {
            people.emplace_back(name, age);
        }
    }
    cout << (hasData ? "Fileからdataを読み込みました。" : "Fileにdataがありません。") << endl;
    ifs.close();
}

int main(){

    while (true)
    {
        cout << "1. 登録 / 2. 表示 / 3. File保存 / 4. File読み込み / 5. dataをclear / 0. 終了" << endl;
        int choice;
        cin >> choice;

        switch (choice)
        {
            case 1:
                // 登録処理
                registerPerson(people);
                break;
            case 2:
                // 表示処理
                for (const auto& person : people) {
                    person.display();
                }
                break;
            case 3:
                // File保存処理
                saveToFile(people);
                break;
            case 4:
                // File読み込み処理
                readFile();
                break;
            case 5:
                // dataをclear処理
                people.clear();
                cout << "dataをclearしました。" << endl;
                break;
            case 0:
                cout << "終了します。" << endl;
                return 0;
            default:
                cout << "無効な選択肢です。" << endl;
        }
    }
    
}