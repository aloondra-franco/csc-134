// CSC 134
// M5T2 - More Practice with Functions
// Alondra Franco 
// 05/02/2026

#include iostream
using namespace std;

void printResult(int number, int result) {
    cout << number << " Squared = " << result << endl;
}

int square(int number) {
    int result; 
    result = number * number; // squared
    return result;
}

int main() {

    // count and find results for each one 
    
    int count = 1;
    int result;

    while (count <= 10) {
        reesult = square(count);
        printResult(count, result);
        count++;
    }
    return 0;
}

