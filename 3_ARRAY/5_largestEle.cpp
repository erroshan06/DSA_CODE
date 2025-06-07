#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int size;
    cout << "Enter the length of array :";
    cin >> size;
    int arr[size];
    cout << "Enter the element of array :";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
  
    int ans = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > ans)
            ans = arr[i];

    }
      cout << " Largest element  of array :"<<ans ;
    return 0 ;
}