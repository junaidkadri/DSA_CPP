#include <iostream>

using namespace std;
int main(){
    int n ; 
    cout<<"enter the value of rows\n";
    cin>> n ;
    for (int i = 1; i <=n-1; i++)
    {
       for (int t = 1; t <= i; t++)     {
        
        cout<<"* ";
        
       }
       for (int s = 1; s <=2*n-2*i ; s++)
       {
        cout<<"  ";
        
       }
       for (int y = 1; y <=i; y++)      {
        cout<<"* ";
        
       }
       cout<<endl;

   }
   
   for (int i = n; i >=1; i--)
    {
       for (int t = 1; t <= i; t++)     {
        
        cout<<"* ";
        
       }
       for (int s = 1; s <=2*n-2*i ; s++)
       {
        cout<<"  ";
        
       }
       for (int y = 1; y <=i; y++)      {
        cout<<"* ";
        
       }
       cout<<endl;

   }

   
       
    
    return 0;
}