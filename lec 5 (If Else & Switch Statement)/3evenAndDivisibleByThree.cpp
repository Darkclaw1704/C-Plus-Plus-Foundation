#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter number : ";
    cin>>number;
    ((number%2==0) && (number%3==0)) ? cout<<"PASS"<<endl : cout<<"FAIL"<<endl;
    (number%6==0) ? cout<<"PASS"<<endl : cout<<"FAIL"<<endl;
    return 0;
}