#pragma once
#include <vector>
#include <stdexcept>
#include "Person.h"
#include "Spouse.h"
#include "Child.h"
#include "Division.h"
#include "JobDescription.h"

class Employee : public Person {
private:
    string companyID;
    string title;
    string startDate;

    Spouse* spouse;                     // 0..1  pointer, can be nullptr
    vector<Child> children;             // 0..n  can be empty
    Division* division;                 // 1     must not be nullptr
    vector<JobDescription> jobDescriptions; // 1..n  at least one required

public:
    //constructor ni division, jobDescription 2 parametertei baina. JobDescription ni 1..n uchir nemeh function deer nemeh bolno
    Employee(
        string name,
        string ssNum,
        int age,
        string companyID,
        string title,
        string startDate,
        Division* division,
        JobDescription firstJob
    )
        : Person(name, ssNum, age),
          companyID(companyID),
          title(title),
          startDate(startDate),
          spouse(nullptr), division(nullptr)
    {
        if(division == nullptr){
            cout << "Division zaaval baih\n";
            return; 
    }

        this->division = division;
        jobDescriptions.push_back(firstJob);
    }

    // Getters
    string getCompanyID() const {
        return companyID;
    }

    string getTitle() const {
        return title;
    }

    string getStartDate() const {
        return startDate;
    }

    Spouse* getSpouse() const {
        return spouse;
    }

    const vector<Child>& getChildren() const {
        return children;
    }

    Division* getDivision() const {
        return division;
    }

    const vector<JobDescription>& getJobDescriptions() const {
        return jobDescriptions;
    }

    // Setters
    void setCompanyID(string id) {
        this->companyID = id;
    }

    void setTitle(string t) {
        this->title = t;
    }

    void setStartDate(string date) {
        this->startDate = date;
    }

    void setSpouse(Spouse* s) {  // 0..1
        this->spouse = s;
    }

    void addChild(const Child& c) {  // 0..n
        children.push_back(c);
    }

    void setDivision(Division* d) {  // 1
        if(d == nullptr){
            throw invalid_argument("Division cannot be null (cardinality 1).");
        }
        this->division = d;
    }

    void addJobDescription(const JobDescription& jd) {  // 1..n
        jobDescriptions.push_back(jd);
    }

    void print() const {
        cout << "========================================" << endl;
        cout << "EMPLOYEE INFO" << endl;
        cout << "========================================" << endl;

        cout << "[Person]" << endl;
        Person::print();

        cout << "[Employee]" << endl;
        cout << "  Company ID : " << companyID << endl;
        cout << "  Title      : " << title << endl;
        cout << "  Start Date : " << startDate << endl;

        cout << "[Division]" << endl;
        division->print();

        cout << "[Job Descriptions]" << endl;
        for(const JobDescription& jd : jobDescriptions){
            jd.print();
        }

        cout << "[Spouse]" << endl;
        if(spouse != nullptr){
            spouse->print();
        } else {
            cout << "  (none)" << endl;
        }

        cout << "[Children]" << endl;
        if(children.empty()){
            cout << "  (none)" << endl;
        }else{
            for(int i = 0; i < (int)children.size(); i++){
                cout << "  Child #" << (i + 1) << ":" << endl;
                children[i].print();
            }
        }
        cout << endl;
    }
};
