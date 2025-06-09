#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort_increasing(int arr[], int n)
{
    for (int i = 1; i <n ; i++)
    {
       
        for (int j = i; j  >0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(&arr[j], &arr[j -1]);
               
            }
            else 
            break ;
        }
     
    }
}
void insertion_sort_decreasing (int arr[], int n)
{
    for (int i = 1; i <n ; i++)
    {
       
        for (int j = i; j  >0; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                swap(&arr[j], &arr[j -1]);
               
            }
            else 
            break ;
        }
     
    }
}


int main()
{
    int n;
    cout << "Enter the length of array :";
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nUnsorted array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nAfter sorting array in increasing order :";
   insertion_sort_increasing(arr, n);
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    cout << "\nAfter sorting array in decreasing order :";
   insertion_sort_decreasing(arr, n);
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
 return 0;
}