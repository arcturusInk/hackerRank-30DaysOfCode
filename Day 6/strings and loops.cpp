#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*THERE IS PROBABLY A BETTER IMPLEMENTAION OF THIS OUT THERE*/

void displayEvenIndices(string aString){
    for(size_t i = 0; i < aString.size(); ++i){
        if (i % 2 == 0){
            cout << aString[i];
        }
    }
}

void displayOddIndices(string aString){
    for(size_t i = 0; i < aString.size(); ++i){
        if (i % 2 == 1){
            cout << aString[i];
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int testCase;
    cin >> testCase;

    string aString;

    for(int i = 0; i < testCase; ++i){
        cin >> aString;
        displayEvenIndices(aString);
        cout << " ";
        displayOddIndices(aString);
        cout << '\n';
    }

    return 0;
}
