#include <iostream>
using namespace std;

int main()
{
    int number,remainder,first,second,third,fourth,fifth;
    cout<<"Enter 5 digit number : ";
    cin>>number;

    first=number/10000;
    number%=10000;
    second=number/1000;
    number%=1000;
    third=number/100;
    number%=100;
    fourth=number/10;
    number%=10;
    fifth=number;

    cout<<"Sum of first and second-last digit of 5-digit number is  : "<<first+fourth<<endl;

    return 0;
}