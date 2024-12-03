#include<iostream>
using namespace std; 
int main(){
     int n ;
     cout<<"enter the value of n  \n";
     cin>>n ;
     int sum = 1 ; 
     for (int i = 1; i <=n; i++)
     {
        sum = sum *i*i ;
     }
     cout<<sum<<endl;
     
     

    return 0 ; 
}