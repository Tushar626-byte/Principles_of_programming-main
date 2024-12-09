//write a c++ code to display hotle management system.

#include <bits/stdc++.h>

using namespace std;

class Room {
private:
    int roomNumber;
    string roomType;
    bool isBooked;

public:
    Room(int number, const string& type) : roomNumber(number), roomType(type), isBooked(false) {}

    void bookRoom() {
        if (!isBooked) isBooked = true;
    }

    void freeRoom() {
        if (isBooked) isBooked = false;
    }

    void displayRoom() const {
        cout << "Room Number: " << roomNumber << endl
             << "Type: " << roomType << endl
             << "Status: " << (isBooked ? "Booked" : "Available") << endl;
    }
};

int main() {
    Room room(411, "Single");
    room.bookRoom();
    room.displayRoom();
    room.freeRoom();
    room.displayRoom();
    return 0;
}
