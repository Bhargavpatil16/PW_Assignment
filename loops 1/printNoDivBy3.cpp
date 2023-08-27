#include<iostream>
using namespace std;
int main(){
    int i = 0;
    for(i = 0; i < 100; i++){
        if(i % 3 == 0){
            cout << i << " ";
        }
    }
}