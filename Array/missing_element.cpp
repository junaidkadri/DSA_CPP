#include <iostream>

using namespace std;
int main(){
    int n ;
    cout<<"enter the value of n  \n";
    cin>> n ;
    cout<<"enter the element and for the missing element put zero \n";
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i] ;
        
    }
    int sum = 0 ;
    for (int i = 1; i <=n; i++)
    {
        sum+= i;
    }
    int arrsum=0 ;// sum of array variable
    for (int i = 0; i < n; i++)
    {
        arrsum += arr[i];
    }
    int sumdifference = sum - arrsum ;
    cout<<"the missing element was "<<sumdifference;
    
    
    
    return 0;
}