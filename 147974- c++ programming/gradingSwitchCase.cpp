
#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store user input
    string name, course;
    int score;
    cout << "Enter the full name of the student: ";
    cin>>name;
    cout << "Enter the course: ";
    cin >> course;
    cout << "Enter the score: ";
    cin >> score;
    cout << "Full name: " << name << endl;
    cout << "Course: " << course << endl;

    // Use switch case structure to output the grade based on the score
    switch (score)
    {
    case 70 ... 100: // Use ... to specify a range of values
        cout << "Grade: A" << endl;
        break;
    case 60 ... 69:
        cout << "Grade: B" << endl;
        break;
    case 50 ... 59:
        cout << "Grade: C" << endl;
        break;
    case 40 ... 49:
        cout << "Grade: D" << endl;
        break;
    case 0 ... 39:
        cout << "Grade: F" << endl;
        break;
    default: // Use default to handle any other value
        cout << "Invalid score" << endl;
        break;
    }

    return 0;
}
