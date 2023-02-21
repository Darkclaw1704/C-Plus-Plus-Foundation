#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter number : ";
    cin>>number;
    ((number%2==0) && (number>0)) ? cout<<"Number is even"<<endl : cout<<"Number is not even "<<endl;
    return 0;
}