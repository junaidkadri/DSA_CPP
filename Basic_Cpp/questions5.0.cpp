//armstrong number 
#include <iostream>
#include<cmath>

using namespace std;
void armstrong(int num , int digit){

int n = num , ans = 0,  rem;  ; 
while (n){
 
  rem = n%10 ;
  n = n/10 ;
  ans = ans + pow(rem,digit);

}
if (ans==num)
{
    cout<<"the number is an armstrong number \n";
    
}
else{cout<<"the number is not an armstrong number  \n";
}



}
int countdigit(int n ){
  int count = 0 ; 

  while(n){{
  count ++ ;
  n/= 10 ;  
  }}
  return count ;
}
int main(){
    int num ; 
    cout<<"enter number  \n";
    cin>> num ;
     int digit = countdigit(num);
     armstrong(num , digit);
    
     
    return 0;
}