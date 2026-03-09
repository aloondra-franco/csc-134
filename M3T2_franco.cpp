// CSC 134 
// M3T2
// 03/09/2026
// Alondra Franco 

#include <iostream>
// for pseudo- random numbers
#include <cmath>
// for making it truly random
#include <ctime>


using namespace std;

int main() {
    cout << "Welcome to Our Casino! "; << endl;
    cout << "Let's roll some dice!" << endl;
    int seed = time(0);
    cout << "Your seed is: " << seed << endl; 
    
    // cout << "What's your lucky number? ";
    // cin >> seed;
    // seed the RNG
    srand (seed);

   const int Max = 6; // numbers from 1-6
   int roll_1, roll_2, total1;
   roll1 = (rand() % MAX) + 1; // Divide by MAX, and keep remainder
   cout << "Your roll was: " << roll1 << endl; 

   roll2 = (rand() % MAX) +1;
   cout << "Your roll was: " << roll2 << endl;

   total = roll1 + roll2;
   cout << "Your roll was: " << total << "!" << endl;

   // playing craps
   // Note:
   // 7 & 11 = win!
   // 2 & 12 = lose!
   // anything else -- comes later
   if (total == 7) {
        cout << "Lucky seven! You win!" << endl;
   }
   else if (total == 11) {
        cout << "Eleven is a winner!" << endl;
   }
   else if
