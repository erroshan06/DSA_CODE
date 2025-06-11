#include <iostream>
using namespace std;
void sorting(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}
void binary_search(int arr[], int n, int key)
{
    int start = 0, end = n - 1, rightIndex = -1, LeftIndex = -1, mid;
    int ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            LeftIndex = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    start = 0, end = n - 1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            rightIndex = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    int array[2] = {rightIndex, LeftIndex};
    cout << "First Occurrence: " << LeftIndex << "\n";
    cout << "Last Occurrence: " << rightIndex << "\n";
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
    cout << "Sorted array:";
    sorting(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    int key;
    cout << "Enter the key that you want to search: ";
    cin >> key;

    binary_search(arr, n, key);
    return 0;
}