/*3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
/*
  a -> b -> c -> a */
  #include <iostream>
 
 using namespace std;

void swap3(int *a,int *b,int *c){

  int temp =  *a ; // a khali hai a ki value temp me hai 
    *a = *c ;       // a khali tha to c ki value a me daal diye hai   or  ab c khali hai 
    *c = *b ;
    *b = temp ;
 
    

}

 int main(){
    int a , b , c ; 
    cout<<"enter a b and c  \n";
    cin>> a>>b>>c ;
    swap3(&a,&b,&c);
    cout<<a<<b<<c;
    
    return 0;
 }