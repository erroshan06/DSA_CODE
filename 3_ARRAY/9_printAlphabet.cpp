#include <iostream>
using namespace std;

int main() {
    char arr[26];

  
    for (int i = 0; i < 26; i++) {
        arr[i] = 'a' + i;
    }

    
    cout << "Lowercase characters in the array: ";
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }

    cout<<"\n";
        for (int i = 0; i < 26; i++) {
        arr[i] = 'A' + i;
    }

    
    cout << "Uppercase characters in the array: ";
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
