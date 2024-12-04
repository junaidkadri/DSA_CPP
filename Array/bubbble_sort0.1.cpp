// in this code we sort the array with the help of bubble sort 
// sort in descending order of array ; 
#include <iostream>
// the theory of the method is in page number 13 in the main copy
// the dry run explanation of the program is in page number 13 in the practice copy
using namespace std;
int main(){
    int arr[6]= {1,2,3,4,5,6};
    int n = 6 ;
    for (int i = n-2; i >=0; i--)
    {  bool swapped = 0 ; // if array already sorted so save th3e code 
        for (int j = 0; j <=i ; j++)
        {
            if (arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
              swapped = 1 ;            
            
            }
            
        }
        if(swapped == 0)break ;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}