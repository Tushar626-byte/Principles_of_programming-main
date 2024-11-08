//Write a C++ program to implement Hybrid  inheritance of university  examination system.
#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;

public:
    void getStudentData() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayStudentData() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Exam : public Student {
protected:
    int marks[3];

public:
    void getMarks() {
        cout << "Enter marks for three subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "Marks for three subjects: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class Result : public Exam {
public:
    void displayResult() {
        int totalMarks = 0;
        for (int i = 0; i < 3; i++) {
            totalMarks += marks[i];
        }
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << (totalMarks / 3.0) << "%" << endl;
    }
};

int main() {
    Result result;
    result.getStudentData();
    result.getMarks();
    cout << endl;
    result.displayStudentData();
    result.displayMarks();
    result.displayResult();

    return 0;
}