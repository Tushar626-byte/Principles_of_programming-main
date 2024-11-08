//Write a C++ program to implement Multilevel inheritance of student registration system.
#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    int age;

public:
    // Method to set name and age of the person
    void setPersonDetails(const string &personName, int personAge) {
        name = personName;
        age = personAge;
    }

    // Method to display person's details
    void showPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student inherits from Person
class Student : public Person {
protected:
    int studentID;
    string course;

public:
    // Method to set student ID and course
    void setStudentDetails(int id, const string &studentCourse) {
        studentID = id;
        course = studentCourse;
    }

    // Method to display student's details
    void showStudentDetails() {
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};

// Derived class: RegisteredStudent inherits from Student
class RegisteredStudent : public Student {
private:
    string registrationID;
    string registrationDate;

public:
    // Method to set registration ID and date
    void setRegistrationDetails(const string &regID, const string &regDate) {
        registrationID = regID;
        registrationDate = regDate;
    }

    // Method to display all details (person, student, and registration)
    void showAllDetails() {
        showPersonDetails();
        showStudentDetails();
        cout << "Registration ID: " << registrationID << endl;
        cout << "Registration Date: " << registrationDate << endl;
    }
};

// Main function
int main() {
    // Create an object of RegisteredStudent
    RegisteredStudent student;

    // Set details for the student
    student.setPersonDetails("Tushar kanti Dey", 19);    // Name and age
    student.setStudentDetails(29, "Computer Science");  // Student ID and course
    student.setRegistrationDetails("REG123", "2024-11-08"); // Registration ID and date

    // Display all details of the student
    cout << "Student Registration Details:\n";
    student.showAllDetails();

    return 0;
}