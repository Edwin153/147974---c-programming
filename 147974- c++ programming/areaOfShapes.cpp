#include<iostream>
using namespace std;
int main(){//circle rectangle triangle

int choice;
double areaCircle, areaTriangle, areaRectangle, pie, length, width, height, base, radius;
pie=3.142;
areaCircle= pie*radius*radius;
areaTriangle=1/2*base*height;
areaRectangle= length*width;
 cout << "Please choose one of the following options:\n";
  cout << "1. Calculate the area of a circle\n";
  cout << "2. Calculate the area of a rectangle\n";
  cout << "3. Calculate the area of a triangle\n";
  cout << "4. Quit\n";
  cout << "Enter your choice: ";
  cin >> choice;

  switch (choice) {
    case 1:
      cout << "Enter the radius of the circle: ";
      cin >> radius;
      cout << "The area of the circle is " << areaCircle<< "\n";
      break;
    case 2:
      cout << "Enter the length and width of the rectangle: ";
      cin >> length >> width;
      cout << "The area of the rectangle is " << areaTriangle << "\n";
      break;
    case 3:
      cout << "Enter the base and height of the triangle: ";
      cin >> base >> height;
      cout << "The area of the triangle is " << areaRectangle << "\n";
      break;
    case 4:
      cout << "Thank you for using this program.\n";
      break;
    default:
      cout << "Invalid choice. Please try again.\n";
      break;
  }


    return 0;
}