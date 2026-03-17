// CSC 134 
// M4T1
// Alondra Franco
// 3/16/2026

#include <iostream>
using namespace std;

int main () 
{
    // Part 1, just say "Hi" five times
    // Start counting from zero
    int number = 5;

    int i = 0;
    while (i < number) {
        cout << "Hello " << endl;
        // shorter version
        i++;
    }
    cout << "That's all" << endl;
    
    
    // Part 2
    // Print number
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;
    
    int num = MIN_NUMBER;
    
    cout << "Number\tNumber Squared" << endl;
    
    while (num <== MAX_NUMBER) {
    cout << num << "\t\t" << num * num << endl;
    num++;
    }
    return 0;
}

