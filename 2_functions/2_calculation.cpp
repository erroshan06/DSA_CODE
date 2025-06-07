#include<iostream>
using namespace std ;
int sum (int x, int y){
int  ans = 0;
ans = x+ y;
return ans ;
}
int mul (int x, int y){
int  mul = 0;
mul= x* y;
return mul ;
}
int main(){
    int a , b;
    cout<< "enter two integers :";
    cin>> a>> b;
    cout<<"sum = "<< sum(a,b)<< endl;
 cout<< "product ="<<mul(a,b);
    return 0;
}