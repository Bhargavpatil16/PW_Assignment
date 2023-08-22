#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter the marks of three sudents: ";
    cin >> a >> b >> c;
if(a>b && a>c){
    cout << "Student 1 has scored the highest marks" << endl;
}
else if(b>a && b>c){
    cout << "Student 2 has scored the highest marks" << endl;
}
else if(c>a && c>b){
    cout << "Student 3 has scored the highest marks" << endl;
}
else if(a==b && b==c){
    cout << "All the students have scored equal marks" << endl;
}
return 0;

}
