#include <iostream>

using namespace std;
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort_ascending(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped != true)
        {
            break;
        }
    }
}
void bubble_sort_descending(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] <arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped )
        {
            break;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the length of array :";
    cin >> n;
    char arr[1000];
    cout << "Enter the elements(alphabetical) :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Unsorted array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nAfter sorting in ascending order :";
    bubble_sort_ascending(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nAfter sorting in descending order :";
bubble_sort_descending(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}