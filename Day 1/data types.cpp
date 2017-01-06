#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int aInt;
    double aDouble;
    string line;

    // Read and save an integer, double, and String to your variables.
    cin >> aInt;
    cin >> aDouble;
    if (getline(cin >> ws, line)) { // eat whitespace
        getline(cin, line);
    }

    // Print the sum of both integer variables on a new line.
    cout << i+aInt << endl;

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1)<< d+aDouble << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + line << endl;

    return 0;
}
