// Calculate the average of elements in an array of size 18.

#include <iostream>

using namespace std;
int main()
{

    int arr[18];

    int sum = 0;

    cout << "Enter the element of array :";

    for (int i = 0; i < 18; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 18; i++)
    {
        sum += arr[i];
    }
     float avg = static_cast<float>(sum) /(sizeof(arr)/sizeof(arr[0]));
    cout << "avg of element in the  array :" << avg;
    return 0;
}