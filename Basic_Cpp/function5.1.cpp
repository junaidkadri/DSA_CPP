//2: Reverse a number n using Function, Constraints: -5000<=n<=5000
#include <iostream>

using namespace std;
int reverse(int n ){
    int ans = 0 ;
    int rem ; 
    while (n)
    {
        rem = n%10 ; 
        n = n /10 ;
        ans = ans *10 +rem ;

    }
    return ans ;
    
}
int main(){
    int n ; 
    cout<<"enter the number please \n";
    cin>> n ;
    reverse(n);
    cout<<"the reverse number is  "<<reverse(n);
    
    
    return 0;
}