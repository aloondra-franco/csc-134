// CSC 134 
// M3HW - Gold 
// Alondra Franco 
// 3/16/2026

# include <iostream>
# include <iomanip>
using namespace std;

void question1();
void question2();
void question3();
void question4();


// Question 1
int main() {

    // Question options
    // Get user to choose question
    int questionChoice;

    cout << "Hello! Which question would you like. Your options are from questions 1-4" << endl;
    cout << "Question 1 - Chatbot Disscussion" << endl;
    cout << "Question 2 - Receipt Calculator" << endl;
    cout << "Question 3 - Pastries" << endl;
    cout << "Question 4 - Math practice" << endl;
    cout << "\nPlease select your desired question (1-4): ";
    cin >> questionChoice; 

    // Based off on choice entered
    if (1 == questionChoice) {
        question1();
    }
    else if (2 == questionChoice) {
        question2();
    }
    else if (3 == questionChoice) {
        question3();
    }
    else if (4 == questionChoice) {
        question4();
    }

    return 0;
}

void question1() {
    // Question 1: Short convo with transcript
    cout << "Question 1 - Chatbot Disscussion" << endl;
    
    // declare variables 
    string userChoice;

    cout << "Hello, I'm a C++ Program!!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> userChoice;

    if ("yes" == userChoice) {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if ("No" == userChoice) {
        cout << "Well, maybe you'll learn to like me later on." << endl;
    }
    else {
        cout << "If you're not sure... that's okay too!" << endl;
    }
}

void question2() {
    // Question 2: Receipt Calculator
    
    