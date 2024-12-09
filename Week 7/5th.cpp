// write a c++ code to display Employee Management System.
#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    int employeeID;
    string name;
    string position;
    bool isEmployed;

public:
    Employee(int id, const string& empName, const string& empPosition)
        : employeeID(id), name(empName), position(empPosition), isEmployed(true) {}

    void terminate() {
        isEmployed = false;
    }

    void hire() {
        isEmployed = true;
    }

    void displayEmployee() const {
        cout << "Employee ID: " << employeeID << endl
             << "Name: " << name << endl
             << "Position: " << position << endl
             << "Status: " << (isEmployed ? "Employed" : "Terminated") << endl;
    }
};

int main() {
    Employee employee(29, "Tushar kanti Dey", "UI/UX Designer");
    employee.displayEmployee();
    employee.terminate();
    employee.displayEmployee();
    return 0;
}
