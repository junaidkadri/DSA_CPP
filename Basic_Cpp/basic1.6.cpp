#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> n;

    int first = 0, second = 1, next;

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << first << " ";
            continue;
        }
        if (i == 1) {
            cout << second << " ";
            continue;
        }
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}