#include <iostream>
#include <cmath> // Allows the use of functions like floor.

using namespace std;

int main(){
	// Define a float variable named 'result' and store on it the result of the function 'floor'.
	// 'floor' rounds the number down.
	double result = floor(1.2);
	cout << "The result is: " << result << endl;

	// 'pow' is a exponential function.
	double result2 = pow(2,3);
	cout << "Result of 2^3 is: " << result2 << endl << "\n";

	// Calculate the area of a circle based on the radius given by the user.
	// pi * r^2
	const double pi = 3.14; // Define a constant value for 'pi' of 3.14.
	double radius; // Initialize the variable 'radius'.

	cout << "Please give the radius of a circle: ";
	cin >> radius;
	double area = pi * pow(radius,2); // Calculate the area of the circle.
	cout << "\n" << "The area of the circle with the radius of "
		 << radius << " is: " << area << endl;

	return 0;
}
