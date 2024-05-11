#include <iostream>

using namespace std;

int main(){
	// Convert celsius to fahrenheit:
	double celsius;
	cout << "Enter a temperature in Celsius: ";
	cin >> celsius;
	double fah_temp = (celsius * 1.8) + 32;
	cout << "Here's your temperature in fahrenheits: " << fah_temp << endl;

	return 0;
}
