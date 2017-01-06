#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int calculateTotalCost(double mealCost, int tipPercent, int taxPercent){
    double tip = (double(tipPercent)/100) * mealCost;
    double tax = (double(taxPercent)/ 100) * mealCost;
    double totalCost = mealCost + tip + tax;
    return round(totalCost);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost;
    int tipPercent;
    int taxPercent;

    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    int totalCost = calculateTotalCost(mealCost, tipPercent, taxPercent);
    cout << "The total meal cost is " << totalCost << " dollars." << endl;

    return 0;
}
