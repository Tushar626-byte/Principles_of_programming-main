//Write a C++ program to implement Multilevel inheritance of student registration system#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
protected:
    string studentID;
public:
    void setStudentDetails(string n, int a, string id) {
        setPersonDetails(n, a);
        studentID = id;
    }
    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Student ID: " << studentID << endl;
    }
};
class Registration : public Student {
private:
    string course;
    string registrationDate;

public:
    void setRegistrationDetails(string n, int a, string id, string c, string date) {
        setStudentDetails(n, a, id);
        course = c;
        registrationDate = date;
    }
    void displayRegistrationDetails() {
        displayStudentDetails();
        cout << "Course: " << course << endl;
        cout << "Registration Date: " << registrationDate << endl;
    }
};
int main() {
    Registration reg;
    reg.setRegistrationDetails("Tushar kanti Dey", 20, "0009043", "Computer Science", "2023-10-01");
    reg.displayRegistrationDetails();
    return 0;
}