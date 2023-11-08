#include <iostream> 
using namespace std; 
int main() {
     double balance = 1000.00; 
     double dailyLimit = 500.00; 
     double withdrawalAmount; 
     cout << "Enter the amount you want to withdraw: "; 
     cin >> withdrawalAmount;
     
      if (withdrawalAmount > balance) {
        
         cout << "Insufficient funds." << endl; 
         } else if (withdrawalAmount > dailyLimit) { 
            cout << "Withdrawal amount exceeds limit." << endl;
             } 
             else {
                 balance -= withdrawalAmount; 
                 cout << "Withdrawal successful. Your new balance is " << balance << "." << endl; 
                 } 
                 
    return 0;
 }