//1: Find the cube of a number using Function.
/*    {{{{{{{{{}}}}}}}}}
             ||||
             ||||
             ||||
        |||  ||||
        |||  ||||
        |||||||||


*/
#include <iostream>


using namespace std;
 int function (int n ){
    int c = n*n*n ;
    return c ; 
 }


int main(){
    int n ; 
    cout<<"enter the number : \n";
    cin>> n ;
    function(n);
    cout<<"the cube of "<<n<<" is "<<function(n);
    
    

    
    return 0;
}            