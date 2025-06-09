   // Function to sort the array in decreasing order.
   
#include<iostream>
using namespace  std ;
void sorting(int arr[], int n ){


    for (int i= 0 ; i<n-1 ; i++){
        bool swapped = false  ;
        for (int j= n-1 ; j>i; j--){
  if (arr[j] >arr[j -1])
            {
                swap(arr[j], arr[j - 1]);
                swapped = true ;
            }
        }
        if (!swapped )
        break ;
        
    }
}

int  binary_search(int arr [], int n , int key){
    int mid ; 
    int first = 0;
    int last = n-1 ;
    while (first <=last )
    {
        mid= (first+last )/2;
        if (arr[mid]== key ){
            return mid ;
        }
        else if (arr[mid] >key  ){
            first = mid +1;

        }
        else 
        last = mid - 1;
    }
    return -1 ;

}

int main(){
    int n ; 
cout << "Enter the length of array :";
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Sorted array:";
    sorting(arr,n);
     for (int i = 0; i < n; i++)
    {
       cout<< arr[i]<<" ";
    }
    cout<<"\n";
    int key ;
    cout<<"Enter the key that you want to search: ";
    cin>> key ;
    
cout<<"\nKey at index " <<binary_search(arr,n ,key);
    return 0; 
}