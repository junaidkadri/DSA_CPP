// the question is find the smallest positive and negative  number 
#include <iostream>
#include <climits>

using namespace std;
int main(){
    int arr[6]={-8, 0, -1, -4, -3};
    int pans = INT_MAX;
 for (int i = 0; i < 6; i++)
 {
    if(arr[i]> 0){
       if (arr[i]<pans)
     
        
        {   pans= arr[i];}
    }
 }if(pans=INT_MAX){
    pans = 1 ;
 }
 cout<<pans;
/* int nans = INT_MIN;
 for (int i = 0; i < 6; i++)
 {
    if(arr[i]< 0){
       if (arr[i]>nans)
     
        
        {   nans= arr[i];}
    }
 }
 cout<<nans;
 */
    return 0;
}