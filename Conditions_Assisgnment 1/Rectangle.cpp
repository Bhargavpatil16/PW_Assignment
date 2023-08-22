#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the length of rectangle: ";
    cin >> a;
    cout << "Enter the breadth of rectangle: ";
    cin >> b;
    int area=a*b;
    int perimeter=2*(a+b);
    if(area>perimeter){
        cout << "Area is greater than perimeter" << endl;
    }
    else if(perimeter>area){
        cout << "Perimeter is greater than area" << endl;
    }
    else{
        cout << "Area and perimeter are equal" << endl;
    }
    return 0;
}
