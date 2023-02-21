#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter number : ";
    cin>>number;
    ((number%3==0) || (number%5==0)) ? cout<<"PASS"<<endl : cout<<"FAIL"<<endl;
    return 0;
}