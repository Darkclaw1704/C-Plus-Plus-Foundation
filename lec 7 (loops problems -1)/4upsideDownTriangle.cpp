#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter number : ";
    cin>>number;
    for (;number>0;number--){
        for(int star=1; star<=number; star++){
            cout<<"*";
        }
        cout<<endl;
    }
}