#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//find the factorial of number, n
int factorial (int n){
    if (n ==1){
        return 1;
    }else{
        int nextSmallestNumber = factorial(n-1);
        return nextSmallestNumber * n;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    int result = factorial(n);
    cout << result;

    return 0;
}
