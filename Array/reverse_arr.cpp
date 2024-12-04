#include <iostream>
// reverse of the array 
using namespace std;
int reverse(int arr[],int revv[]){//using int with arguiment  return type
    int i = 0,j=4 ;
    while(i<=4){
         revv[j]=arr[i];
         j--;
         i++;
    }
    return 1;
}
int main(){  
    int arr[5];
    for (int i = 0; i <5; i++)// input of the array hai bhai 
    {
        cin>> arr[i] ;
        
    }
   int revv[5];
    reverse(arr,revv); 
   for (int i = 0; i < 5; i++)
   {
     cout<<revv[i]<<" ";
     
   }cout<<endl;
   
      
    return 0;
}