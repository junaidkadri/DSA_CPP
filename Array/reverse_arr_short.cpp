#include <iostream>
// reverse of the array 
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // declared array
    int i = 0, j = 4;
    while (i < j) // jab tak i j se chota hai dono ko swap karte jao            
    {
        swap(arr[i], arr[j]); // swap function on cpp
        i++;
        j--;
    };
    for (int i = 0; i < 5; i++)
    {                          
        cout << arr[i] << " "; // printing of array reversed
    }

    return 0;
}