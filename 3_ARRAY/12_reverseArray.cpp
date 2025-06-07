#include<iostream>
using namespace std ;
int main(){

    int size ;
       cout<< "Enter the length of array :" ;
    cin>> size;
    int arr[size];

 
    cout<< "Enter the element of array :";
    
    for (int  i = 0; i<size ; i++){
        cin>> arr[i];
    }
    int temp[size];
    int j =0, i = size -1 ;
    while (i>=0){

        temp[j]= arr[i];
        j++, i--;

    }
    cout<<"reverse array ";
    for (int j = 0 ; j<size ; j++){
        cout<< temp[j]<<" ";
    }
return 0;
}