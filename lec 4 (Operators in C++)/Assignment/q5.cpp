#include <iostream>
using namespace std;

int main()
{
    int number,first,second,third;
    cout<<"Enter number : ";
    cin>>number;

    first=number/100;
    number%=100;
    second=number/10;
    number%=10;
    third=number;
    
    cout<<"Sum of digits : "<<first+second+third<<endl;

    return 0;
}