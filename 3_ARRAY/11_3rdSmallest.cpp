//  Find the third smallest element in an array
//  of unique elements size n. Where n>3.

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array (n > 3): ";
    cin >> n;

    if (n <= 3)
    {
        cout << "Size must be greater than 3!";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int firstSmallest = INT_MAX, secondSmallest = INT_MAX, thirdSmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < firstSmallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        }
        else if (arr[i] < secondSmallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = arr[i];
        }
        else if (arr[i] < thirdSmallest)
        {
            thirdSmallest = arr[i];
        }
    }

    cout << "Third smallest element: " << thirdSmallest;
    return 0;
}
