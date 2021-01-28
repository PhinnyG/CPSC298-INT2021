//Name:     Finn White
//Program:  intarray.cpp
//Class:    CPSC298

#include <iostream>
#include <cmath>

using namespace std;

//simple program that prompts the user to enter 10 ints and then prints them
int main() {
    cout << "Please enter 10 integers! " << endl;
    int nums[10];
    int currNum;
    for(int i = 0; i < 10; ++i) {
        cin >> currNum;
        nums[i] = currNum;
    }

    for(int i = 0; i < 10; ++i) {
            cout << nums[i] << " ";
    }

    cout << endl;
}


