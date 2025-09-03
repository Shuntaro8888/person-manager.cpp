#pragma once
#include<iostream>
#include<string>

using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        Person(string personName, int personAge) : name(personName), age(personAge) {}

        void setName(string personName) {
            this->name = personName;
        }

        void setAge(int personAge) {
            this->age = personAge;
        }

        string getName() const {
            return this->name;
        }

        int getAge() const {
            return this->age;
        }

        void display() const {
            cout << " アドレス: " << this << endl;
            cout << " Name: " << this->name << endl;
            cout << " Age: " << this->age << endl;
        }
};

class Friend : public Person {
    public:
        Friend(string friendName, int friendAge) : Person(friendName, friendAge) {}

        void display() {
            cout << " Name: " << getName() << endl;
            cout << " Age: " << getAge() << endl;
        }
};

class BestFriend : public Friend {
    public:
        BestFriend(string bestFriendName, int bestFriendAge) : Friend(bestFriendName, bestFriendAge) {}

        void display() {
            cout << " BestFriend " << endl;
            Friend::display();
        }
};