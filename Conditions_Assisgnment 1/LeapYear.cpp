#include <iostream>
using namespace std;
int main(){
  int a;
    cout << "Enter a year: ";
    cin >> a;
    if(a%4==0 && a%100!=0 || a%400==0){
        cout << a << " is a leap year" << endl;
    }
    else{
        cout << a << " is not a leap year" << endl;
    }
}