#include<iostream>
using namespace std;
 int main(){
     char ch;
     cout << "Enter a character: ";
     cin >> ch;
     if(ch>='a' && ch<='z'){
         cout << "Lowercase" ;
        }
     else if(ch>='A' && ch<='Z'){
        cout << "Uppercase" << endl;
        }
        else if(ch>='0' && ch<='9'){
         cout << "Digit" << endl;
        }
        else{
         cout << "Special Character" << endl;
        }
        return 0;


 }
