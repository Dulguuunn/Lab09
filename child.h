#pragma once
#include "Person.h"

class Child : public Person {
private:
    string favoriteToy;

public:
    Child() : Person(), favoriteToy("") {}
    Child(string name, string ssNum, int age, string favoriteToy)
        : Person(name, ssNum, age), favoriteToy(favoriteToy) {}

    string getFavoriteToy() const {
        return favoriteToy;
    }

    void setFavoriteToy(string toy) {
        this->favoriteToy = toy;
    }

    void print() const {
        Person::print();
        cout<<"  Favorite Toy: "<<favoriteToy << endl;
    }
};
