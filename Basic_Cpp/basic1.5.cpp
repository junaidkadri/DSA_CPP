#include <iostream>

using namespace std;
int main(){
    int n ; 
    cout<<"enter the numberdd \n";
    cin>> n ;
   for (int i = 2; i <n; i++)
   {
    if (2==n)
    {
        cout<<"it is a prime number \n";
        break ;
    }
    
    if (n%i==0)
    {
        cout<<"the number is not prime \n";
        break ;
    }
    else {
        cout<<"the number is prime  \n";
        break;
    }

    
   }
   
    
    
    return 0;
}