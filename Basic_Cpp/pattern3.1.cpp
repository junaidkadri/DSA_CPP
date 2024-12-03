#include <iostream>
#include<iomanip>

using namespace std;
int main(){
    int n ; 
    cout<<"enter the value of n  \n";
    cin>> n  ;
    for (int i = 1; i <=n; i++){
    for (int s = 0; s <=n-i; s++)
    {
        cout<<setw(2)<<" ";
        
    }
    
    
       for (int j = 1; j <=i; j++)
       {
         cout<<setw(2)<<j;
         
       }
       cout<<endl;
       
    }
    
    
    return 0;
}


