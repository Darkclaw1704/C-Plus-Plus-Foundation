#include <iostream>
using namespace std;

int main()
{   
    int number;
    cout<<"Enter number : ";
    cin>>number;
    for (int star=1; star<=number; star++){
        for (int rows=1; rows<=star; rows++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}