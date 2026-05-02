/*
CSC 134 
M6T1- Loops and Arrays
Alondra Franco 
*/

#include <iostream>
using namespace std;

// Function Declarations
void method1();
void method2();

// main
int main() {
    // count # of flowers per day, two different ways
    method1();
    method2();

    return 0;
}

// function definitions
// Method 1 - no arrays
void method1() {
    // count 5 days of flowers, get total and the average
    cout << "Enter each flower count found each day" << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    const int SIZE = 5;
    int count = 0;
    int flow_today;  // value to add
    int flow_total = 0;  // add up 
    double flow_avg = 0;  // average

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> flow_today; 
        flow_total += flow_today;
        count ++;
     // move to the next day
    }
    cout << "Total + " << flow_total << endl;
    flow_avg = (double) flow_total / SIZE;
    cout << "Average = " << flow_avg << endl;
}

// Method 2 - with array
void method2() {
    // names of the days
    // number of flowers found on the days

    const int SIZE = 5; 
    string days[SIZE] = {"M", "T", "W", "Th", "F"}; // initialized 
    int flowers[SIZE]; // not initialized 
    int flow_total = 0;
    double flow_avg = 0.0;

    for (int i = 0; i < SIZE; i++) {
        cout << "# on " << days[i] << ": ";
        cin >> flowers[i];
    }

    // print the output in "tabular" (table) format
    cout << "Day\tFlowers" << endl;
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << "\t" << flowers[i] << endl;
        // find total 
        flow_total += flowers[i]
    }

    // find the total and print the results 
    flow_avg = (double) flow_total / SIZE;
    cout << "Total = " << flow_total << endl;
    cout << "Average = " << flow_avg << endl;
    
}