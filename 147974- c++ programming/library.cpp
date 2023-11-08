// Include the necessary libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Define the discount rates for different purchase amounts
const double discount_1 = 0.1; // 10% off for purchases between $50 and $100
const double discount_2 = 0.2; // 20% off for purchases between $100 and $500
const double discount_3 = 0.3; // 30% off for purchases above $500

// Define the main function
int main() {
    // Declare the variables for the purchase amount, the discount amount, and the total cost
    double purchase, discount, total;

    // Ask the user to input the purchase amount
    cout << "Enter the purchase amount: $";
    cin >> purchase;

    // Check if the purchase amount is valid
    if (purchase <= 0) {
        // Invalid purchase amount
        cout << "Invalid purchase amount. Please enter a positive number." << endl;
        // Exit the program
        return 0;
    }
    else {
        // Calculate the discount and the total cost based on the purchase amount
        if (purchase >= 50 && purchase < 100) {
            // Apply the first discount rate
            discount = purchase * discount_1;
            total = purchase - discount;
        }
        else if (purchase >= 100 && purchase < 500) {
            // Apply the second discount rate
            discount = purchase * discount_2;
            total = purchase - discount;
        }
        else if (purchase >= 500) {
            // Apply the third discount rate
            discount = purchase * discount_3;
            total = purchase - discount;
        }
        else {
            // No discount
            discount = 0;
            total = purchase;
        }

        // Print the purchase amount, the discount amount, and the total cost
        cout << fixed << setprecision(2); // Set the output format to two decimal places
        cout << "Purchase amount: $" << purchase << endl;
        cout << "Discount amount: $" << discount << endl;
        cout << "Total cost: $" << total << endl;
    }

    // Return 0 to indicate successful execution
    return 0;
}
