#include <iostream>

int main(){
	double x = 10;	  // Defining x to be a floating number.
	int y = 3;		  // Definin y to be a integer.
	double z = x / y; // Defining z as a floating number.

	std::cout << "z equals: ";
	std::cout << z;
	std::cout << "\n";

	// Increment y by 5 and print it.
	y = y + 5;
	std::cout << "y equals: ";
	std::cout << y;
	std::cout << "\n";

	// Increment y by 1.
	y++; // Decrement can be done with '--'
	std::cout << "y equals: ";
	std::cout << y;
	std::cout << "\n";

	// First 'o' will be assigned the value of 'y', then 'y' will be incremented.
	// Therefore printing 'o' will print the value of 'y'.
	int o = y++;
	std::cout << "o equals: ";
	std::cout << o;
	std::cout << "\n";
	std::cout << "y equals: ";
	std::cout << y;
	std::cout << "\n";

	// First 'x' will be incremented by 1, then 'h = x'.
	int h = ++x;
	std::cout << "h equals: ";
	std::cout << h;
	std::cout << "\n";



	return 0;
}
