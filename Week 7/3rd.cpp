//write a c++ code to display Hospital management system.
#include <bits/stdc++.h>

using namespace std;

class Patient {
private:
    int patientID;
    string name;
    string ailment;
    bool isAdmitted;

public:
    Patient(int id, const string& patientName, const string& patientAilment)
        : patientID(id), name(patientName), ailment(patientAilment), isAdmitted(false) {}

    void admit() {
        isAdmitted = true;
    }

    void discharge() {
        isAdmitted = false;
    }

    void displayPatient() const {
        cout << "Patient ID: " << patientID << endl
             << "Name: " << name << endl
             << "Ailment: " << ailment << endl
             << "Status: " << (isAdmitted ? "Admitted" : "Discharged") << endl;
    }
};

int main() {
    Patient patient(411, "Tushar kanti Dey", "Fever");
    patient.admit();
    patient.displayPatient();
    patient.discharge();
    patient.displayPatient();
    return 0;
}
