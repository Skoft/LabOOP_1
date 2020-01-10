#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <array>


using namespace std;
class Student {
private:
    string firstName;
    string secondName;
    string midleName;

    unsigned int age = 0;
    unsigned int ID = 0;
    vector <int> groupNumber;

    vector <int> lastGrades;

public:
    Student() = delete;

    Student(const string& _firstName, const string& _secondName, const string& _middleName, const unsigned int& _age,
        const unsigned int& _ID, vector <int> _lastGrades) {
        firstName = _firstName;
        secondName = _secondName;
        midleName = _middleName;
        age = _age;
        ID = _ID;
        lastGrades = _lastGrades;
    }

    const string& GetFirstName();
    const string& GetSecondName();
    const string& GetMidleName();
    const unsigned int GetAge();
    const unsigned int GetID();
    const float GetAverageScore();

    void RequestToGroup(int& groupNumber);
    void LeaveTheGroup(int& _groupNumber);
    void PrintInformation();

    ~Student() = default;
};
