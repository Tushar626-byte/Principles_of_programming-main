// Write a C++ program to display Bank management system.
#include <bits/stdc++.h>

using namespace std;

class BankAccount {
private:
    long long accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(long long accNo, const string& name, double initialBalance)
        : accountNumber(accNo), accountHolderName(name), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) balance -= amount;
    }

    void displayAccount() const {
        cout << fixed << setprecision(2); 
        cout << "\nAccount Number: " << accountNumber
             << "\nAccount Holder: " << accountHolderName
             << "\nBalance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount account(12345, "Tushar Kanti Dey", 1000); 

    account.deposit(500); 
    account.withdraw(200); 
    account.displayAccount();

    return 0;
}