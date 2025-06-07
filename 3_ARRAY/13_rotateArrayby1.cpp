#include<iostream>
#include<vector>

using namespace std ;
int main(){
    int size ;
       cout<< "Enter the length of array :" ;
    cin>> size;
   vector <int>arr(size);
  
 
    cout<< "Enter the element of array :";
    
    for (int i = 0; i<size ; i++){
        cin>> arr[i];
    }
   vector <int>temp(size);
    temp [0]= arr[size-1];
      for (int i = 1; i<size ; i++){
        temp[i]= arr[i-1];
      }
          for (int i = 0; i<size ; i++){
 
      cout<<temp[i]<<" ";
    }

   return 0;

      }
