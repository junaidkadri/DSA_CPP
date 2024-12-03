#include <iostream>

using namespace std;
int main(){
    int n ; 
    cout<<"enter the value of n  \n";
    cin>> n  ;
    for (int i = n; i >=1; i--) // for row
    {
       for (int j = n; j >=i; j--)// for column
       {
         cout<< j << "  " ;
         
       }
       cout<<endl;
       
    }
    
    
    return 0;
}
