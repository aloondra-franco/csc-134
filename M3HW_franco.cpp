// CSC 134 
// M3HW - Silver
// Alondra Franco 
// 3/16/2026

# include <iostream>
# include <iomanip>
using namespace std;

void question1();
void question2();
void question3();


// Question 1
int main() {

    // Question options
    // Get user to choose question
    int questionChoice;

    cout << "Hello! Which question would you like. Your options are from questions 1-4" << endl;
    cout << "Question 1 - Chatbot Disscussion" << endl;
    cout << "Question 2 - Receipt Calculator" << endl;
    cout << "Question 3 - Guess the pastries" << endl;
    cout << "\nPlease select your desired question (1-3): ";
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
    cout << "Question 2 - Receipt Calculator" << endl;
    
    // Declare variables 
    string mealName = "Famous Smash Burger"
    double item_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount;
    double tip_amount;
    double sub_total;
    double total_price;

    int num_meals;
    int dine_in;

    //Greet user and take their order
    cout << "Hello, Welcome to Our CSC 134 Restaurant" << endl;
    cout << "Would you like to try our Famous Smash Burger today? " << endl;
    cout << "We have people from all over the world who come to try our food!" << endl;

    cout << "What would you like to order? ";
    cin >> mealName; 
    cout << "Great! The cost is going to be " << item_price << ". How many would you like to order?" << endl;
    cin >> num_meals;

    // Ask if it is a dine in or carry out
    cout << "And will you be dining in or dining out today? Please select 1 for dine in and 2 for dine out!" << endl;
    cin >> dine_in;

    // Ask for tip (dine in)
    cout << "Thank you for choosing us! How much would you like to tip? " << endl;
    cin >> tip_amount;
    cout << "Thank you!" << endl;

    // Calculate the total price of purchase
   sub_total = num_meals * item_price;
   tax_amount = item_price * tax percent;
   // Total price

   total_price = sub_total + tax_amount + tip_amount
   
   // present the receipt 
   cout << setprecision(2) << fixed;
   cout << endl;
   cout << "YOUR ORDER " << endl << "-------------------------------------" << endl;
   cout << num_meals << " x " << mealName << "\t$" << item_price << endl;
   cout << "Subtotal = \t\t$" << sub_total << endl;
   cout << "Tip = \t\t\t$" << tip_amount << endl;
   cout << "Tax = t\t\t\t$" << tax_amount << endl;
   cout << "-------------------------------------" << endl;
   cout << "Your total = \t\t\t$" << total_price << endl;
   cout << "Thank you! Have a great day!" << endl;
}

void question3() {
    // Question 3 - pastries
    cout << "Question 3 - Guess the pastires" << endl;

    cout << "This is a fun little challenge to test you pastry knowledge!" << endl;
    cout << "The game is simple, all you have to do to win is put your knowledge to the test and answer to the best of your ability!" << endl;
    cout << "You will be guessing which two pastries we chose!" << endl;
    cout << "Good luck!" << endl;

    // Declare variables
    int choice1
    int choice2

    cout << "Alright lets begin! Our first question is going to be an easy one." << endl;
    cout << "Please wait till the very end for your quiz results!" << endl;

// First question
    cout << "\nQuestion 1: Which pastry is eaten on every once a year celebration?" << endl;
    cout << "Heres a hint! This celebration involves birthdays!" << endl;

    cout << "Option 1: Cake" << endl;
    cout << "Option 2: Croissants" << endl;
    cout << "Please enter 1 or 2: ";
    cin >> choice1; 

// Second question
    cout << "Which is the best flavor for a cake?" << eendl;
    cout << "Option 1: Chocolate" << endl;
    cout << "Option 2: Strawberry" << endl;
    cout << "Please enter 1 or 2: ";
    cout >> choice2;

    if (1 == chocie1) {
        cout << "You are correct!" << endl;
        cout << "Thank you for playing" << endl;
    }
    if  (2 == choice2) {
        cout << "BOO You lose!" << endl;
        cout <<" Thank you for playing! We'll see you again next try!" << endl;
    }
}


 


