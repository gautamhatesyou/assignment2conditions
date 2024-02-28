#include <iostream>
using namespace std;
int main() {

    char c1,c2;
    cout<<"Enter first character : ";
    cin>>c1;
    cout<<"Enter second character : ";
    cin>>c2;

    int asciic1 = (int) c1;
    int asciic2 = (int) c2;

    cout<<asciic1-asciic2<<endl;
}