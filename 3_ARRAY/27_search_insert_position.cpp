// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1

// Example 3:
// Input: nums = [1,3,5,6], target = 7
// Output: 4




#include<iostream>
using namespace  std;
void sort(int arr[], int n){
    {
    for (int i = 0; i < n-1; i++)
    {
        int swapped = 0;
        for (int j = n -1; j >i ; j--)
        {
            if (arr[j] <arr[j -1])
            {
                swap(arr[j], arr[j - 1]);
                swapped = 1;
            }
        }
        if (swapped ==0)
        break ;
    }
}

}
int search_insertPosition(int arr[],int target ,int n){

int  start=0 , end=n-1 ,mid ;
while (start <=end){
    mid = start + (end - start)/2;
    if (arr[mid]== target ){
     return mid ;
    }
    else if (arr[mid ]< target ){
        start = mid +1;
    }
    else 
   end= mid - 1;
} 

}
int main(){
    int n ; 
    cout<<"Enter the length of array :";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements :";
    for (int i= 0; i<n ; i++){
       cin>> arr[i];
    }

sort(arr, n);
    cout<<"sorted array  :";
    for (int i= 0; i<n ; i++){
       cout<<arr[i]<<" ";
    }
    int target ; 
    cout<<"\nEnter the key to check their insert position";
    cin>> target ;

   
 int position =  search_insertPosition(arr,target , n) ;
     cout << "Insert position of " << target << " is: "<<position;
    return 0;
}