#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    int result;
    cin>>a>>d>>n;
    for(int i=1;i<=n;i++){
        result=a+(i-1)*d;
        cout<<"The result for AP is: "<<result<<endl;
        
    }

}