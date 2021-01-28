//Name:     Finn White
//Program:  zeroboth.cpp
//Class:    CPSC298

#include <iostream>

using namespace std;

void zeroBoth(int &one, int &two) {
    one = 0;
    two = 0;
}

int main() {
    cout << "Wanna see a magic trick? Enter two integers" << endl;
    int first;
    int second;
    cin >> first;
    cin >> second;
    zeroBoth(first, second);

    cout << "Now they are "<< first << " and " << second << " and have DISAPPEARED" << endl;
}

