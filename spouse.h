#pragma once
#include "Person.h"

class Spouse : public Person {
private:
    string anniversaryDate;

public:
    Spouse() : Person(), anniversaryDate("") {}
    Spouse(string name, string ssNum, int age, string anniversaryDate)
        : Person(name, ssNum, age), anniversaryDate(anniversaryDate) {}

    string getAnniversaryDate() const {
        return anniversaryDate;
    }

    void setAnniversaryDate(string date) {
        this->anniversaryDate = date;
    }

    void print() const {
        Person::print();
        cout<<"  Anniversary Date: "<<anniversaryDate << endl;
    }
};
