#include <iostream>

using namespace std;

int main() {
    // Read the input numbers
    int x, y;
    cin >> x >> y;

    // Calculate the results
    int summation = x + y;
    int multiplication = x * y;
    int subtraction = x - y;

    // Print the results
    cout << x << " + " << y << " = " << summation << endl;
    cout << x << " * " << y << " = " << multiplication << endl;
    cout << x << " - " << y << " = " << subtraction << endl;

    return 0;
}
