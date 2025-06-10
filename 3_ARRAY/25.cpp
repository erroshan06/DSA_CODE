#include<iostream>
#include<vector>
using namespace  std ;
void sorting(int arr[], int n ){
    for (int i = 1; i <n ; i++)
    {
       
        for (int j = i; j  >0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j -1]);
               
            }
            else 
            break ;
        }
     
    }
}
int  binary_search(int arr [], int n , int key){
    int mid ; 
    int first = 0, right =-1,left=-1;
    int last = n-1 ;
    while (first <=last )
    {
       mid= first +(last-first )/2;
        if (arr[mid]== key ){
            right =mid ;
           last= mid-1;

        }
        else if (arr[mid] <key  ){
            first = mid +1;


        }
        else 
        last  = mid  - 1;
    }

  first = 0, last = n-1;
  while (first <=last )
    {
        mid= first +(last-first )/2;
        if (arr[mid]== key ){
            left  =mid ;
            first= mid+1;

        }
        else if (arr[mid] <key  ){
            
            first = mid  + 1;
        


        }
        else 
          last = mid -1;
    }



cout<<"\nkey at   last index "<<first;
cout<<"\nkey at first index "<<left;
}
int main(){
    int n ; 
cout << "Enter the length of array :";
    cin >> n;
    int arr[10000];
    cout<<"Enter the elements";
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
    

    binary_search(arr,n,key);

    return 0;
}