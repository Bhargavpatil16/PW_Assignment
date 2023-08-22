#include <iostream>
using namespace std;
int main(){
int a,area,circumference;
cout<<"Enter the Area of circle: ";
cin>>a;
area=3.14*a*a;
circumference=2*3.14*a;
if(area>circumference){
    cout<<"Area is greater than circumference"<<endl;
}
else if(area<circumference){
    cout<<"Circumference is greater than area"<<endl;
}
else{
    cout<<"Area and circumference are equal"<<endl;
}


}