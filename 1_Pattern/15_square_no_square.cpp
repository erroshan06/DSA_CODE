// for eg:-
// 1  4 9  16
// 1  4 9  16
// 1  4 9  16
// 1  4 9  16


#include<iostream>

using namespace std ;
int main(){
int row , col;
 cout<<"Enter the rows :";
  cin>> row;
 cout<<"\nEnter the columns :";

 cin>>col;
 for (int i = 1; i<=row; i++ ){
    for (int j= 1; j<= col; j++){
        cout<< j*j<<" " ;
    }
    cout<< endl;
 }

    return 0 ;
}