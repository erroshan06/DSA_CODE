#include<iostream>
using namespace std ;
 void  primeorNOT(int a){
    if (a<= 1){
        cout<<a<< " is Not a Prime number \n ";
        return ;
    }

for(int i= 2 ;i<a; i++){
    if (a % i== 0){
  cout<<a<< " is Not a Prime number \n";
  return  ;
    }
}

cout<< a<<" is prime number\n";

 }


int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


 int main(){
    int x; 
    cout<< "enter the number :"; 
    cin >>x;
    primeorNOT(x);
  

    if (x < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(x);
        cout << "Factorial of " <<x << " is " << result << endl;
    }

  


    return 0;
 }