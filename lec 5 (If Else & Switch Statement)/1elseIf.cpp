#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter number : ";
    cin>>number;

    if (number>=0){
        if (number==0){
            cout<<"Number is ZERO "<<endl;
        }
        else if (number%2==0){
            cout<<"Number is EVEN "<<endl;
        }
        else{
            cout<<"Number is ODD "<<endl;
        }
    }
    else{
        cout<<"Number is negative"<<endl;
    }

    return 0;
}