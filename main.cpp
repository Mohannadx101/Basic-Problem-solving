#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1415;

double calculateDiameter(double radius) {
    return 2 * radius;
}

double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

double calculateArea(double radius) {
    return PI * pow(radius, 2);
}

int main() {
    double radius;

    // Prompt user to input radius
    cout << "Enter the radius : ";
    cin >> radius;

    // Validate user input
    if (radius <= 0) {
        cout << "Radius must be positive.(Erorr)" << endl;
        return 1; // indicate error
    }

    // Calculation
    double diameter = calculateDiameter(radius);
    double circumference = calculateCircumference(radius);
    double area = calculateArea(radius);

    // Output 
    cout << "Diameter of circle: " << diameter << endl;
    cout << "Circumference of circle: " << circumference << endl;
    cout << "Area of the circle: " << area << endl;

    return 0; // successful execution
}
