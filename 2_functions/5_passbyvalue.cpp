// pass by value 
//When you pass a variable by value, the function gets a copy of the variable. 
//Any changes made to it do not affect the original variable.


#include<iostream>
using namespace std;
void Increment(int n ){

    n++ ;
    return ;
}
int main(){
    int a;
    cout<<" Enter an integers ";
    cin>> a;
    Increment(a);
    cout<< a;
    return 0;
}