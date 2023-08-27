//Display GP series
#include<iostream>
using namespace std;
int main(){
    int a,r,n;
    int result;
    cin>>a>>r>>n;
    for(int i=1;i<=n;i++){
        result=a*(r^(i-1));
        cout<<"The result for GP is: "<<result<<endl;
        
    }

}