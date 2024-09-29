#include <iostream>
using namespace std;

int main() {
    // Variables for gallons and miles
    double gallons = 15.0;
    double miles = 375.0;

    // Calculate miles per gallon
    double mpg = miles / gallons;

    // Display the result
    cout << "The car gets " << mpg << " miles per gallon." << endl;

    return 0;
}