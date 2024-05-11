#include <iostream> // Allow to read and print from stdin/stdout.

int main(){
	// Defining variable 'file_size' and assigning the value of '100' to it.
	int file_size;
	file_size = 100;

	// Defining variable 'sales' with decimal value of 9.99;
	double sales = 9.99;

	// Initialize multiple variables on the same line.
	int var1 = 1, counter = 0;

	// Leaving a variable unassigned will result in a error.

	// Printing variable 'file_size'.
	std::cout << file_size;
	std::cout << "\n"; // Printing a new line.

	// 'file_size + sales'
	std::cout << file_size + sales;

	// Return exit code of 0.
	return 0;
}
