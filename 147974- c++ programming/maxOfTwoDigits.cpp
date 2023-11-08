#include <iostream>
using namespace std;

int main()
{
    // Declare two variables to store the user input
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Switch expression based on the comparison of the two numbers
    switch (num1 > num2)
    {
        
        case 0:
            
            cout << "The maximum number is " << num2 << endl;
            break;

        case 1:
            
            cout << "The maximum number is " << num1 << endl;
            break;
    }

    return 0;
}
