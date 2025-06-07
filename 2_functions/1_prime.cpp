#include<iostream>
using namespace std ;
 void  primeorNOT(int a){
    if (a<= 1){
        cout<<a<< " is Not a Prime number ";
        return ;
    }

for(int i= 2 ;i<a; i++){
    if (a % i== 0){
  cout<<a<< " is Not a Prime number ";
  return  ;
    }
}
cout<< a<<" is prime number";

 }
 int main(){
    int x; 
    cout<< "enter the number :"; 
    cin >>x;
    primeorNOT(x);
    return 0;
 }