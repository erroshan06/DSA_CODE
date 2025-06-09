#include <iostream>
#include<limits>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort_ascending(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int swapped = 0;
        for (int j = n -1; j >i ; j--)
        {
            if (arr[j] <arr[j -1])
            {
                swap(&arr[j], &arr[j - 1]);
                swapped = 1;
            }
        }
        if (swapped ==0)
        break ;
    }
}
void bubble_sort_descending(int arr[], int n)
{
    for (int i= 0 ; i<n-1 ; i++){
        int swapped = 0 ;
        for (int j= n-1 ; j>i; j--){
  if (arr[j] >arr[j -1])
            {
                swap(&arr[j], &arr[j - 1]);
                swapped = 1;
            }
        }
        if (swapped ==0)
        break ;
        
    }
}
int main()
{
    int n;
    cout << " Enter the size of array :";
    cin >> n;
    int arr[10000];
    cout<<"Enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"\nUnsorted array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
cout<<"\nAfter sorting array in ascending order:";
bubble_sort_ascending(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    cout<<"\nAfter sorting array in descending  order:";
bubble_sort_descending(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;

}