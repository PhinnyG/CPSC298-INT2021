#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int maxRoomCap;
int attendees;
int distanceFromCap;
bool isOverFull(int roomCap, int numPeople);
void input();
void output(bool atCap, int distanceFromCap);
void posCheck(int *num);

int main() {

    input();
    bool fullCheck = isOverFull(maxRoomCap, attendees);
    distanceFromCap = fabs(maxRoomCap - attendees);
    output(fullCheck, distanceFromCap);

    return 0;
}

//checks to see if the room is full or not and computes the distance from the capacity
bool isOverFull(int roomCap, int numPeople) {
    if (roomCap >= numPeople) {
 //       distanceFromCap = roomCap - numPeople;
        return false;
    }
    else {
     //   distanceFromCap = numPeople - roomCap;
        return true;
    }
}

//handles the user input
void input() {
    cout << endl;
    cout << "Please enter the maximum room capacity: ";
    cin >> maxRoomCap;
    posCheck(&maxRoomCap);
    cout << "Please enter the number of people attending: ";
    cin >> attendees;
    posCheck(&attendees);
    cout << endl;
}

//handles output formatting to console
void output(bool atCap, int distanceFromCap) {
    string plurality;
    if (distanceFromCap == 1)
        plurality = "person";
    else
        plurality = "people";

    if (atCap) {
        cout << "Slow down there Mr. Popular. Please exclude your " << distanceFromCap;
        cout << " least favorite " << plurality << " to meet fire regulations." << endl;
    }
    else if (distanceFromCap != 0) {
        cout << "Not a very popular meeting? You can invite " << distanceFromCap << " more " << plurality  << " and still be within fire regulations." << endl;
    }
    else {
        cout << "Its a full house! Congratulations on filling up the place without violating fire regulations." << endl;
    }

    cout << endl;
}

//ensures user input is only positive
void posCheck(int *num) {
    while (*num <= 0) {
        cout << "Please enter a value greater than 0: ";
        cin >> *num;
    }
}


