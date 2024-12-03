#include <iostream>
#include<iomanip>

using namespace std;
int main(){
    int n ; 
    cout<<"enter the value of n  \n";
    cin>> n  ;
    for (int i = 0; i <n; i++)
    { for (int s = 0; s < n-i-1; s++)//add -1 if starts from zero
    {
        cout<<setw(2)<<" ";
        
    }
    
        
       for (int j = 0; j <=i; j++)
       {
         cout<<setw(2)<<"*";
         
       }
       cout<<endl;
       
    }
    
    
    return 0;
}


