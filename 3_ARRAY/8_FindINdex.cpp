//  Find the index of a specific element in an array,
//  if the element is nor present, print -1.
//   Ask the size of the array from the user and then implement it.

#include <iostream>
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

    int target ; 
    cout <<"enter the element to find index:";
cin>> target ;
int index = -1 ; 
    for (int i = 0; i < size; i++)
    {
         if (arr[i]== target ){
            index = i;
            break ;
         }
         
    }
    cout<< "Index of the  "<<target <<": "<< index ;
    return 0;
}