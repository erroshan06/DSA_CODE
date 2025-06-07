//pass by reference
//Pass by reference allows a function to directly modify the original variable passed to it.


#include<iostream>
using namespace std;
void Increment(int &n ){

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