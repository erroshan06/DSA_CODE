#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the position to find the Fibonacci number:";
    cin >> n;
    if (n<1){
               cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    
    }
    int arr[10000];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <=n - 1; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[n - 1]<<" ";
    return 0;
}