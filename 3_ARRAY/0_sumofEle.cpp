#include<iostream>
using namespace std ;
int Sum_of_Element(int n){
 int a[n];

    int sum =0;
    cout<<" Enter the element of array :";
    for (int i= 0; i<n ; i++){

        cin>>a[i];
    }
    for(int i = 0 ; i<n; i++){
sum +=a[i];
    }
    
    return sum ;

}
int main(){
       
 int arr[10000];
       int size ;
    cout<<"Enter the size of array :";
    cin>> size;

 int result = Sum_of_Element(size);

 cout<<"Sum of all element :"<<result ;
    return 0 ;
}