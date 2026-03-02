// csc 134 
// M2LAB 
// franco
// 3/2/2026

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // Constants for cost and amount charged 
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // Variables
    double length,  // The crate's length 
            width,  // crate's width 
            height, // The crate's height 
            volume, // The crate's volume
            cost,   // The cost to build the crate
            charge, // Customer charge for the crate
            profit, // The profit made 
            
    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volume, the cost to produce it, the charge to the customer, and the profit.
    volume = length * width* height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the calculated data.
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "The cost to build: $" << cost << endl;
    cout << "Charge the customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}
