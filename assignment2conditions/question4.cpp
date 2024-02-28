#include <iostream>
using namespace std;
int main() {

    float pi,h,r;
    pi = 3.14;
    cout<<"Enter height : ";
    cin>>h;
    cout<<"Enter radius : ";
    cin>>r;
    float vol = pi*r*r*h;
    cout<<"Volume is : "<<vol<<endl;
}