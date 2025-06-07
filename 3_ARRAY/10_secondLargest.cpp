// 5: Find the second largest element in
//  an array of unique elements of size n. Where n>3.

#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array (n > 3): ";
    cin >> n;

    if (n <= 3) {
        cout << "Size must be greater than 3!";
        return 0;
    }

    int arr[n];
    cout << "Enter "<<n<<"  elemnt of array  :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

  
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element: " << secondLargest;
    return 0;
}
