/*
CSC 134
M2HW - Gold 
Alondra Franco 
03/02/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants for the cost and amount charged 
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables
    double length,  // The crate's length
            width,  // The crate's width
            height, // The crate's height 
            volume, // The crate's volume 
            cost,   // The crate's cost to build
            charge, // The charge to the customer for the crate
            profit; // The crate's profit 

    // Set the desired output formatting for numbers. 
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for the crate's length, width, and height
    cout << "\nEnter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volume, the cost to produce it, the charge to the customer, and the profit.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHRAGE_PER_CUBIC_FOOT;
    profit = charge - cost;
    
    // Display the calculated data.
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Profit: $" <<  profit << endl;
    return 0;
}