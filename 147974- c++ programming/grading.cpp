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
    cin>>course;
    cout << "Enter the score: ";
    cin >> score;

    char grade;

    
    if (score >= 70) 
    {
        grade = 'A'; 
    }
    else if (score >= 60) 
    {
        grade = 'B'; 
    }
    else if (score >= 50) 
    {
        grade = 'C'; 
    }
    else if (score >= 40) 
    {
        grade = 'D'; 
    }
    else if (score >= 0) 
    {
        grade = 'F'; 
    }
    else // If score is any other value
    {
        grade = 'I'; 
    }

    // Output the full name, course, score and grade of the student
    cout << "Full name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Score: " << score << endl;

    if (grade == 'I') // If grade is I
    {
        cout << "Invalid score" ; 
    }
    else 
    {
        cout << "Grade: " << grade ; 
    }

    return 0;
}
