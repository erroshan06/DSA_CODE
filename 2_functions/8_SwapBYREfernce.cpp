#include<iostream>
using namespace std;
void swapp(int &a, int &b){
    int temp ;
    cout<<"before swapping " <<a<< "  "<<b<<endl;
    temp = a; 
    a= b;
    b= temp;
       cout<<"after  swapping " <<a <<"  "<<b<<endl;
}
int main(){
    int a ,b;
    cout<< "Enter two integers :";
    cin>> a>> b;
    swapp(a, b);
 cout <<"after function call in the main :"<<a <<"  "<<b<<endl; // Using pass-by-reference, so values will be swapped 
 //in the main function as well
    return 0;
}