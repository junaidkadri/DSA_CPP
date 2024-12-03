#include <iostream>

using namespace std;
int main(){
    int n ; 
    cout<<"enter the value of n  \n";
    cin>> n ;
    int m ; 
    cout<<"enter the power of the m  \n";
    cin>> m  ;
    int num = n ;
    
    for (int  i = 1; i <m; i++)
    {
        num = num * n ;
    }
    cout<<num<<endl;
        
    return 0;
}