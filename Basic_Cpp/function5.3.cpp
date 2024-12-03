// 6: Given two numbers n, r. Find nCr (Combination). Use Function here.
#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
int nCr(int n, int r) {
    if (r > n) return 0; // r cannot be greater than n
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cout << "Enter values for n and r: ";
    cin >> n >> r;

    cout << "nCr = " << nCr(n, r) << endl;
    return 0;
}
