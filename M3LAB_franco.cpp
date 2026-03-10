// CSC 134 
// M3LAB2 - Number To Grade Converter
// 03/09/2026
// Alondra Franco

#include <iostream>
using namespace std;

int main () {

//Variables
int numGrade;

// welcome and ask the user for their grade
cout << "Hello, Welcome." << endl;
cout << "Today we will determine you rletter grade!" << endl;
cout << "Please enter your exact grade in order to get started." << endl;
cin >> numGrade;

if (numGrade >= 90 & numGrade <= 100) {
    cout << "\nYour letter grade is an A!" << endl;
}
else if (numGrade >= 80 & numGrade <= 89) {
    cout << "\nYour letter grade is a B!" << endl;
}
else if (numGrade >= 70 & numGrade <= 79) {
    cout << "\nYour letter grade is a C!" << endl;
}
else if (numGrade >= 60 & numGrade <= 69) {
    cout << "\nYour letter grade is an F!" << endl;
}
else {
    cout << "Sorry but that input is incorrect. Please make another entry." << endl;
}

cout << "Thank you for using our program!" << endl;
return 0;
}
