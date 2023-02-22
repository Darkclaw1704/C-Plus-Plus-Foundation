#include <iostream>
using namespace std;

int main(){
    int length, breadth;
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter breadth : ";
    cin>>breadth;

    (length==breadth) ? cout<<"It is a square"<<endl : cout<<"It is a rectangle"<<endl;
    return 0;
}