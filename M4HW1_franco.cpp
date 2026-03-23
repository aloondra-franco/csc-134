/*
CSC 134
M4HW1 - Gold
Aondra Franco 
03/23/26
*/

#include <iostream>
using namespace std;

int main() 
{ 
    // declare variables
    int numValue;
    int i = 1;
    int finalAnswer;

    // Ask user to input a value
    cout << "Hello Welcome!" << endl;
    cout << "Please select a value from 1- 12." << endl;
    cout << "This value will be put to the multiplication table." << endl;
    cin >> numValue;

    while (i <= 12) {
        finalAnswer= numValue * i;
        cout << numValue << " times " << i << " is equal to " << finalAnswer << endl;
        i++;
    }
}

return 0;

