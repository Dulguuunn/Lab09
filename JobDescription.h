#pragma once
#include <string>
#include <iostream>
using namespace std;

class JobDescription {
private:
    string description;

public:
    JobDescription() : description("") {}
    JobDescription(string description) : description(description) {}

    string getDescription() const {
        return description;
    }

    void setDescription(string desc) {
        this->description = desc;
    }

    void print() const {
        cout<<"    - "<<description << endl;
    }
};
