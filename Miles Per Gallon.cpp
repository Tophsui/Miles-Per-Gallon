#include <iostream>
using namespace std;

int main() {
    // Constants
    const double GALLONS_OF_GAS = 15.0;
    const double MILES_DRIVEN = 375.0;

    // Calculate MPG
    double mpg = MILES_DRIVEN / GALLONS_OF_GAS;

    // Display the result
    cout << "The car gets " << mpg << " miles per gallon." << endl;

    return 0;
}