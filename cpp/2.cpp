#include <iostream>

using namespace std;

int main(){
	// Define a,b
	int a = 1;
	int b = 2;

	// Swap values of a and b using a temp var.
	int temp = a;
	a = b;
	b = temp;

	// Print a and b.
	cout << "Value of a: ";
	cout << a;
	cout << "\n";

	cout << "Value of b: ";
	cout << b;
	cout << "\n";

	return 0;
}
