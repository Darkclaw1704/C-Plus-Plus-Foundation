#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter number : ";
    cin>>number;
    (number<=0) ? cout<<number*(-1)<<endl : cout<<number<<endl;
    return 0;
}