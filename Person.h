#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    string ssNum;
    int age;

public:
    Person() : name(""), ssNum(""), age(0) {}
    Person(string name, string ssNum, int age) : name(name), ssNum(ssNum), age(age) {}

    string getName() const {
        return name;
    }

    string getSSNum() const {
        return ssNum;
    }

    int getAge() const {
        return age;
    }

    void setName(string name) {
        this->name = name;
    }

    void setSSNum(string ssNum) {
        this->ssNum = ssNum;
    }

    void setAge(int age) {
        this->age = age;
    }

    void print() const {
        cout<<"  Name  : " << name << endl;
        cout<<"  SSNum : " << ssNum << endl;
        cout<<"  Age   : " << age << endl;
    }
};
