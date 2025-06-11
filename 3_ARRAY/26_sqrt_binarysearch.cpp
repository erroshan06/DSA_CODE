#include<iostream>
using namespace std;
 int mySqrt(int x) {
        int start = 0, end = x, ans , mid ;
        if (x<2){
            return x;

        }

        while (start <=end ){
            mid = start +(end -start )/2;
            if (mid == x/mid ){
return mid ;
            }
            else if( mid <x/mid ){
                ans = mid ;
                        start = mid +1;
            }
            else 
end= mid -1;
        }
      return ans;  
    }
    int main(){
        int x ;
 cout << "Enter a number to find its square root: ";
    cin >> x;

    int result = mySqrt(x);
    cout << "The integer square root of " << x << " is: " << result << endl;

    return 0;
}