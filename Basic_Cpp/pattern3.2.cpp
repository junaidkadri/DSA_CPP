#include <iostream>
#include<iomanip>
 using namespace std;
int main(){
int n ; 
cout<<"enter the value of n  : ";
    cin>> n ;
    
    int nst= n/2;
    int nsp = 1 ;
    for (int i = 1; i <=n; i++)
    {
       cout<<setw(2)<<"*";
    }
    printf("\n");

    for (int j = 1; j <=n; j++)
    {
        for (int k = 1; k <=nst; k++)
        {
           cout<<setw(2)<<"*";
           
        }
        for (int l = 1; l <=nsp; l++)
        {
            cout<<setw(2)<<" ";
            
        }
         for (int k = 1; k <=nst; k++)
        {
           cout<<setw(2)<<"*";
           
        }
         nst--;
        nsp+=2;
       
        cout<<"\n";
        
    }
    for (int j = 1; j <=n; j++)
    {
        for (int k = 1; k <=nst; k++)
        {
           cout<<setw(2)<<"*";
           
        }
        for (int l = 1; l <=nsp; l++)
        {
            cout<<setw(2)<<" ";
            
        }
         for (int k = 1; k <=nst; k++)
        {
           cout<<setw(2)<<"*";
           
        }
         nst--;
        nsp+=2;
       
        cout<<"\n";
        
    }

    
    return 0;
}
