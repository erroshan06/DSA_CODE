#include<iostream>
using namespace std;

unsigned long long int factorial (int n){
    unsigned long long int mul = 1 ;
    while (n>=1){
        if (n<= 20){
        mul = mul *n; 
        n-- ;
        }
        else 
       { 
        while (n>=1){
        mul = mul *n; 
        n-- ; 
        }
       cout<<mul<< "due  to overflow ";
break;
     
       }
    }
return mul ;
}

    

int main(){
    int n  ; 
    cout<<"Enter the Number :";
    cin>> n;
    if (n<0){
        cout<< "factorial is not defined for negative integers";
    }
else if (n<=20)
   cout<< n<< "! ="<<  factorial(n)<< endl ;
   else
   factorial(n);
return 0;  
}