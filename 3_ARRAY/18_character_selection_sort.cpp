#include <iostream>
using namespace std;
void swap(char *a, char *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort_increasing(char a[], int size)
{
    for (int i = size-1; i >=0; i--)
    {
        int index = i;
        for (int j = i -1; j >=0; j--)
        {
            if (a[index] < a[j])
            {
                index = j;
            }
        }
        swap (&a[i], &a[index]);
    }
}
void selection_sort_decreasing(char a[] , int size)
{
    for (int i = size-1; i >=0; i--)
    {
        int index = i;
        for (int j = i -1; j >=0; j--)
        {
            if (a[index] > a[j])
            {
                index = j;
            }
        }
        swap(&a[i], &a[index]);
    }
}
int main()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;
    char arr[10000];
    cout<<"Enter the element ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Unsorted array:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After sorting element in ascending order:";
    for (int i = 0; i < size; i++)
    {
        selection_sort_increasing(arr, size);
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After sorting element in descending order:";
    for (int i = 0; i < size; i++)
    {
        selection_sort_decreasing(arr, size);
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}