#include <iostream>

using namespace std;
int main(){
    int n ; 
    cout<<"enter the value of n  \n";
    cin>> n  ;
    for (int i = 1; i <=n; i++)
    {
       for (int j = 1; j <=i; j++)
       {
         cout<<  i*i << "  " ;
         
       }
       cout<<endl;
       
    }
    
    
    return 0;
}


