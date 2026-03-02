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
    // Get amount of pizza that is being ordered 
    // Get the amount of customers 
    // Variables 
    int pizzas;
    int slicesPerPizza;
    int customers;

    cout << "Welcome to Our Awesome Pizza Party!";
    cout << "We offer a lot of fun and yummy pizza!";

    cout << "How many customers will be joining your party today? ";
    cin >> customers;

    cout << "\nHow many pizzas will you be taking today? ";
    cin >> pizzas;
    cout << "Okay, great!"

    cout << "And how many slices would you like there to be on your pizza? ";
    cin >> slicesPerPizza;

    // Calculate 
    int totalSlices = pizzas * slicesPerPizza;
    int totalAmountAte = customers * 3;
    int leftoverPizza = totalSlices - totalAmountAte;

    cout << "Hello, how many pizzas were not eaten? ";
    cout << "There were: " << leftover << endl;

    return 0;
}

    

