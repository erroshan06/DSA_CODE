#include<iostream>
using namespace std ;

char convert(char character ){
    if (character >='a' && character<='z' ){
    char ans = character - 'a'+'A';
    return ans ;
    }
else if (character >='A' && character<='Z' ){
    char ans = character - 'A'+'a';
    return ans ;
}
else 

return '\0';
}
int main(){
    while(true ){

    
    char  character ;
    cout<< "Enter any alphabet  letter or 0 to exit  \n";
    cin>> character ;
    if (character == '0'){
        cout<< "program exited " << endl;
        break;
    }
    char result =convert(character); 
    if (result == '\0'){
        cout<<"Invalid Input . Please enter any alphabet"<< endl;
    }
    else
    cout<<"converted "<< convert(character)<< endl;
}
    return 0;
}