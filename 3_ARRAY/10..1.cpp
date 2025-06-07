#include<iostream>
#include<climits>
using namespace std ;
int main(){
    int size ;
       cout<< "Enter the length of array :" ;
    cin>> size;
    int arr[size];
  
 
    cout<< "Enter the element of array :";
    
    for (int i = 0; i<size ; i++){
        cin>> arr[i];
    }
    int largest =INT_MIN ;
    int second_largest = INT_MIN ;
        
    for (int i = 0; i<size ; i++){
  if (arr[i]> largest ){
    largest = arr[i];
   
  }
}
    for (int i = 0; i<size ; i++){
  if (arr[i]!= largest ){
second_largest= max(second_largest, arr[i] );
  }
}



cout<<"second largest element :"<<second_largest;
    return 0;
}
