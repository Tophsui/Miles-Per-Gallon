#include <iostream>
using namespace std;

int main() {
    // Variables for user input
    double gallonsOfGas;
    double milesDriven;

    // Get input from user
    cout << "Enter the number of gallons of gas used: ";
    cin >> gallonsOfGas;

    cout << "Enter the number of miles driven: ";
    cin >> milesDriven;

    // Calculate MPG
    double mpg = milesDriven / gallonsOfGas;

    // Output the result
    cout << "The car gets " << mpg << " miles per gallon." << endl;

    return 0;
}