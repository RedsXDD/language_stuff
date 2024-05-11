#include <iostream>

using namespace std;

int main(){

	// Defining 'pi' to be a constant var, aka never changes.
	const double pi = 3.14;
	// pi = 0; // Redefining 'pi' is an error now because that variable is a constant.

	// Printing pi.
	cout << pi;
	cout << "\n";
	return 0;
}
