#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    cout << "Enter the coordinates of first point: ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of second point: ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of third point: ";
    cin >> x3 >> y3;
    float slope1=(y2-y1)/(x2-x1);
    float slope2=(y3-y2)/(x3-x2);
    if(slope1==slope2){
        cout << "Points are collinear" << endl;
    }
    else{
        cout << "Points are not collinear" << endl;
    }

  
}