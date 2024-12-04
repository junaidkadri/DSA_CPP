#include <iostream>

using namespace std;
int main(){
    int arr [ 5]= { 1,2,3,4,5};
    int ans = -1 ; 
    for (int i = 0; i < 5; i++)
    {
        if (ans<arr[i])
        {
            ans=arr[i];
        }
        
    }
 int second = -1 ;
 for (int i = 0; i < 5; i++)
 {
    if (arr[i]!=ans)
    {
        second = max(second,arr[i]);
    }
    
 }
 cout<<second;
 
    
    return 0;
}