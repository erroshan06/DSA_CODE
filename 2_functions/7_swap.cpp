#include<iostream>
using namespace std;
void swapp(int a, int b){
    int temp ;
    cout<<"before swapping " <<a<< "  "<<b<<endl;
    temp = a; 
    a= b;
    b= temp;
       cout<<"after  swapping " <<a <<"  "<<b<<endl;
}
void swapp(float f1, float f2){
    int c1 ;
    cout<<"before swapping float value " <<f1<< "  "<<f2<<endl;
    c1 = f1; 
    f1= f2;
    f2= c1;
       cout<<"after  swapping  float value " <<f1 <<"  "<<f2<<endl;
}
int main(){
    int a ,b;
    float f1, f2;
    cout<< "Enter two integers :";
    cin>> a>> b;
    swapp(a, b);
 cout <<"after function call in the main :"<<a <<"  "<<b<<endl;
   // Using pass by value , so values will not  be swapped in the main function 
 cout<< "Enter  two float value :"<< endl;
 cin>> f1>> f2;
 swapp(f1,f2);

    return 0;
}