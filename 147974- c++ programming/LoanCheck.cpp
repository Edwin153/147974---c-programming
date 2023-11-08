
#include <iostream>
using namespace std;
int main() {

  string name;
  int age;
  double balance;
  string crb_status;
  int months;

  // Prompt the user to enter customer details
  cout << "Enter customer name: ";
  cin>> name;
  cout << "Enter customer age: ";
  cin >> age;
  cout << "Enter customer bank balance: ";
  cin >> balance;
  cout << "Enter customer CRB status (good or bad): ";
  cin >> crb_status;
  cout << "Enter number of months as a customer: ";
  cin >> months;

  // Check if the customer meets the loan conditions
  bool qualified = true; 
  if (age <= 22) { 
    qualified = false;
    cout << "Sorry, you are not qualified for a loan because you are too young.\n";
  }
  if (balance <= 50000) {
    qualified = false;
    cout << "Sorry, you are not qualified for a loan because your bank balance is too low.\n";
  }
  if (crb_status != "good") { 
    qualified = false;
    cout << "Sorry, you are not qualified for a loan because your CRB status is not good.\n";
  }
  if (months <= 6) { 
    qualified = false;
    cout << "Sorry, you are not qualified for a loan because you have not been a customer for long enough.\n";
  }

  // If the customer meets all the conditions
  if (qualified) {
    cout << "Congratulations, you are qualified for a loan!\n";
  }

  return 0;
}


