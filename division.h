#pragma once
#include <string>
#include <iostream>
using namespace std;

class Division {
private:
    string divisionName;

public:
    Division() : divisionName("") {}
    Division(string divisionName) : divisionName(divisionName) {}

    string getDivisionName() const {
        return divisionName;
    }

    void setDivisionName(string name) {
        this->divisionName = name;
    }

    void print() const {
        cout<<"  Division: "<<divisionName << endl;
    }
};
