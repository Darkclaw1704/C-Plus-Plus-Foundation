#include <iostream>
using namespace std;

int main()
{
    int counter, number, sum=0;
    cout<<"How many numbers do you want to enter : ";
    cin>>counter;

    do{
        cout<<"Enter N : ";
        cin>>number;
        sum+=number;
        counter--;
    }while (counter>0);

    cout<<"SUM : "<<sum<<endl;
    return 0;
}