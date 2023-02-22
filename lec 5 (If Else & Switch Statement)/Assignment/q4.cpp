#include <iostream>
using namespace std;

int main(){
    int integer;
    cout<<"Enter integer : ";
    cin>>integer;

    (integer>=0) ? cout<<integer<<endl : cout<<"The number is negative and skipped"<<endl;

    return 0;
}