#include <iostream>
#include <vector>
#include <string>
#include "spouse.h"
#include "child.h"
#include "division.h"
#include "JobDescription.h"
#include "employee.h"

using namespace std;
 
int main() {
    // 4.2 Division болон JobDescription объект байгуулах
    Division d1("Medeelel Teknologi");
    Division d2("Hunii Noots");
   
    JobDescription j1("Ahlah Engineer");
    JobDescription j2("Manager");
 
    Spouse s1("Saraa");
    Child c1("Bat"), c2("Bold"), c3("Tsetseg");
 
    // 4.3 Employee объект үүсгэж Division, JobDescription зааж өгөх
    Employee emp1("Dulguun", &d1, &j1);
    Employee emp2("Bilguuntugs", &d2, &j2);
 
    // 4.4 Spouse болон Child-ийг тохируулах
    emp1.setSpouse(&s1);       // 1 эхнэртэй (0..1)
    emp1.addChild(&c1);        // 2 хүүхэдтэй (0..n)
    emp1.addChild(&c2);
 
    emp2.addChild(&c3);        // Эхнэргүй (0), 1 хүүхэдтэй (n)
 
    // 4.5 Мэдээллийг хэвлэх
    emp1.printInfo();
    emp2.printInfo();
 
    return 0;
}
 