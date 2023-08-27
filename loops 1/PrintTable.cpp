#include<iostream>
using namespace std;
int main(){
    int i,a;
    cout<<"Enter the number whose table you want to print: ";
    cin>>a;
    for(i=1;i<=10;i++){
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
    return 0;
}