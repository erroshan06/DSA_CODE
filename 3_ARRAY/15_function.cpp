#include<iostream>
using namespace std ;
void fun(int a[5], int n){
    for (int i= 0; i<n ; i++){
        cout<< a[i]<<" "; 
         
    }
    cout<<"\n";
     cout<<sizeof(a)<<endl ;
}
int main(){
    int arr [5]= {1,2,3,4,5};
    cout<<sizeof(arr)<<endl ;
    fun (arr, 5);
    return 0;
}