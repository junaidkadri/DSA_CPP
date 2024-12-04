#include <iostream>
// THIS PROGRAM IS FOR ASCENDING    selection sort 
// the dry run of the program is in page no . 11 of practice copy 
// and the theory was is page no . 10 of main copy 
using namespace std;
int main(){
    int arr[10]={9,9,7,7,2,3,1,7,3,8};
    for (int i = 0; i <= 9; i++)
    {  int index = i ;
        for (int j = i+1; j < 10; j++)
        {
            if (arr[j]<arr[index])
            {
                index = j ;
            }
            
        }
        swap(arr[i],arr[index]);
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}