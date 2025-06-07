// 1: Take 20 elements from user input and find its sum with the help of an array.
#include <iostream>

using namespace std;
int main()
{

    int arr[20];

    int sum = 0;

    cout << "Enter the element of array :";

    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }

  

    for (int i = 0; i < 20; i++)
    {
        sum += arr[i];
    }
  cout << "Sum  of element in the  array :"<< sum;
    return 0;
}