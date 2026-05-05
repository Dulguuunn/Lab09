#ifndef CLASS_H
#define CLASS_H
#include <string>
class Spouse {
    string name;
public:
    Spouse(string n) : name(n) {}
    string getName() { return name; }
};
#endif