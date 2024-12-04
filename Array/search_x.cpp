#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>
using namespace std;
// note - in this code the declaration of array is aoutomatic and not by the user we can do that also but in this code this is aoutomatic
int findx(int arr[], int x)
{
    int indece = -1;
    for (int i = 0; i <= 49; i++)
    {
        if (arr[i] == x)
        {
            indece = i;
            break;
        }
    }

    return indece;
}

int main()
{

    // Seed the random number generator
    srand(time(0));

    // Automatic array declaration of size 6
    int arr[50];

    // Populate the array with random values
    for (int i = 0; i < 50; i++)
    {
        arr[i] = rand() % 100; // Random values between 0 and 99
    }

    int x; // in this program we have to find this x element index
    cout << "enter the value of x  \n";
    cin >> x;
    int index = findx(arr, x);

    if (index != -1)
    {
        cout << "the value of x " << x << "is present on the index" << index;
    }

    else
    {
        cout << "the x is not present in the array \n";
    }

    return 0;
}