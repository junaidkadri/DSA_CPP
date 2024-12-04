// in this code we sort the array with the help of bubble sort 
// sort in ascending order of array ; 
#include <iostream>
// the theory of the method is in page number 13 in the main copy
// the dry run explanation of the program is in page number 13 in the practice copy
using namespace std;
int main(){
    int arr[6]= {6,5,4,3,2,1};
    int n = 6 ;
    for (int i = n-2; i >=0; i--)
    {
        for (int j = 0; j <=i ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}