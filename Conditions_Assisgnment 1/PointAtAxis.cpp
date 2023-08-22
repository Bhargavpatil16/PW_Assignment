#include <iostream>
using namespace std;
int main(){
int x,y;
cout << "Enter the coordinates of point: ";
cin >> x >> y;
if(x==0 && y==0){
    cout << "Point lies on origin" << endl;
}
else if(x==0){
    cout << "Point lies on y-axis" << endl;
}
else if(y==0){
    cout << "Point lies on x-axis" << endl;
}
else{
    cout << "Point lies on neither x-axis nor y-axis" << endl;
}
    return 0;
}