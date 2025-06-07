#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort_increasing(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < (n - 1) - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}
void bubble_sort_decreasing(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < (n - 1) - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
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
    bubble_sort_increasing(arr, n);
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    cout << "\nAfter sorting array in decreasing  order :";
    bubble_sort_decreasing(arr, n);
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}