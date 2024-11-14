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
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        for (int i = 0; i < 3; i++) {
            cout << "Marks for subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

class Sports {
protected:
    int sportsScore;

public:
    void getSportsScore() {
        cout << "Enter sports score: ";
        cin >> sportsScore;
    }

    void displaySportsScore() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Result : public Exam, public Sports {
public:
    void displayResult() {
        displayStudentData();
        displayMarks();
        displaySportsScore();
        int total = marks[0] + marks[1] + marks[2] + sportsScore;
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result result;
    result.getStudentData();
    result.getMarks();
    result.getSportsScore();
    result.displayResult();

    return 0;
}