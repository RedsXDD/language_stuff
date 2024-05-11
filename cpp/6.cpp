#include <iostream>

using namespace std;

int main(){
	double value; // Initialize the variable 'value'.
	cout << "Enter a value: "; // Ask user to enter a value.
	cin >> value; // Read from user input and pipe it into 'value'.
	cout << "You typed: " << value << endl;

	// Other example.
	double x;
	double y;
	cout << "Enter values for x and y: ";
	cin >> x >> y; // Read values of x and y together.
	cout << "x + y is: " << x + y << endl;

	return 0;
}
