//Write a c++ program to display Library management system.

#include <bits/stdc++.h>

using namespace std;

class Book {
private:
    int bookID;
    string title;
    bool isIssued;

public:
    Book(int id, const string& bookTitle) : bookID(id), title(bookTitle), isIssued(false) {}

    void issueBook() {
        if (!isIssued) isIssued = true;
    }

    void returnBook() {
        if (isIssued) isIssued = false;
    }

    void displayBook() const {
        cout << "Book ID: " << bookID << endl
             << "Title: " << title << endl
             << "Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

int main() {
    Book book(626, "C++ Programming");
    book.issueBook();
    book.displayBook();
    book.returnBook();
    book.displayBook();
    return 0;
}
