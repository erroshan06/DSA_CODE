#include<iostream>
using namespace std ;
int main(){
    int arr [6]= {1,2,3,4,5,6};

    cout<< "Size of array :"<<sizeof(arr)<<endl;
 cout<< "total element in the array  :"<< sizeof(arr)/sizeof(arr[0]);
}