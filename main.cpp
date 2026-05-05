#include <iostream>
#include <vector>
#include "Division.h"
#include "JobDescription.h"
#include "Employee.h"
#include "Spouse.h"
#include "Child.h"

using namespace std;

int main() {

    //Division objektuud
    Division engDiv("Engineering");
    Division hrDiv("Human Resources");
    Division salesDiv("Sales");

    //JobDescription objektuud
    JobDescription jdSoftware("Software Engineer");
    JobDescription jdArchitect("System Architect");
    JobDescription jdRecruiter("Recruiter");
    JobDescription jdTrainer("Trainer");
    JobDescription jdSalesRep("Sales Representative");
    JobDescription jdSalesLead("Sales Lead");


    // Employee 1: Bat - Engineering, 2 JobDesc, gerlesen, 2 huuhedtei
    Employee bat("Bat Bold", "SS-1001", 35,
                 "EMP-001", "Senior Engineer", "2018-03-15",
                 &engDiv, jdSoftware);

    bat.addJobDescription(jdArchitect);       // 1..n

    Spouse s1("Narantuyaa Bold", "SS-2001", 33, "2015-06-20");
    bat.setSpouse(&s1);                       // 0..1

    bat.addChild(Child("Temuujin", "SS-3001", 8,  "LEGO"));   // 0..n
    bat.addChild(Child("Enkhjin",   "SS-3002", 5,  "Barbie"));


    // Employee 2: Sarantuyaa - HR, 2 JobDesc, gerleegui, huuhedgui
    Employee sara("Sarantuyaa Dorj", "SS-1002", 28,
                  "EMP-002", "HR Specialist", "2021-07-01",
                  &hrDiv, jdRecruiter);

    sara.addJobDescription(jdTrainer);        // 1..n
    // spouse -> nullptr (0..1, tokhiruulaagui)
    // children -> hooson (0..n)

    // Employee 3: Batmunkh - Sales, 2 JobDesc, gerlesen, 1 huuhedtei
    Employee batmunkh("Batmunkh Gantulga", "SS-1003", 42,
                      "EMP-003", "Sales Manager", "2012-11-10",
                      &salesDiv, jdSalesRep);

    batmunkh.addJobDescription(jdSalesLead);  // 1..n

    Spouse s3("Oyunchimeg Gantulga", "SS-2003", 40, "2008-09-14");
    batmunkh.setSpouse(&s3);                  // 0..1

    batmunkh.addChild(Child("Ankhbayar", "SS-3003", 12, "Futbolyn bombog")); // 0..n


    // Buh Employee-iin medeelliig hevleh

    bat.print();
    sara.print();
    batmunkh.print();

    return 0;
}
