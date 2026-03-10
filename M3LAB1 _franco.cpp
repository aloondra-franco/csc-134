// CSC 134 
// M3LAB1
// 03/09/2026
// Alondra Franco

#include <iostream>
using namespace std;

int main() {
// Example #1: single program
// cout << "Hello World!" << endl; 

cout << "Hello, welcome to Our Bakery! " << endl;

// Example #2: Set a scenario, questions, and answer to them
// Example test values: 1, 2, 3, banana (try all of them)

// Declare variables
int choice;

// ask the question
//cout << "Do you choose door 1 or door 2?" endl;

cout << "At this time the only pastries we are only serving croissants and cinnamon rolls" << endl;
cout << "Would you like the first or second option?" << endl;
cout << "Put in 1 or 2: ";
cin >> choice;

// using if, make a decision based onthe user's choice
/* 
 if (1 == choice) {
     cout << "You chose door 1" << endl;
}
else if (2 == choice) {
    cout << "You chose door 2" endl;
}
else {
    cout << "I'm sorry, that is not a valid choice." << endl;
*/

if (1 == choice) {
    cout << "Alright so a croissant? Sounds great!" << endl;
}
else if (2  == choice) {
    cout << "Alright so a Alright so a cinnamon roll? Sounds good!" << endl; 
}
else {
    cout << "Sorry! We are all out at the moment. Please choose a different option." << endl;
}

// finish up 
cout << "Thanks for your purchase! it will be ready shortly." << endl;
// runs no matter what they choose
return 0;
} // end of main () method 

// Example #3
/*
void chooseDoor 1() {
    cout << "You chose door 1." << endl;
    cout << "You win ... a new car!" << endl;
}
void chooseDoor2() {
    cout << "You chose door 2." << endl;
    cout << "You win ... a bottle floor wax." << endl;
}
*/
void choose1() {
    cout << "\nYou chose the first option. Okay!" endl;
    cout << "The croissant will be out shortly!" << endl;
}

void choose2() {
    cout << "\nYou chose the second option. great!" endl;
    cout << "Your cinnamon roll will be out shortly!" << endl;
}

// If added a door #3 or 4, we could add another else if to our main (), and then declare and define chooseDoor3() and so on.