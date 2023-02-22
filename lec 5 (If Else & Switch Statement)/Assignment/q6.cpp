#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    cout<<"Your grade is ";
    if (marks>=90)
    {
        cout<<"A+"<<endl;
    }
    else if(marks>=80)
    {
        cout<<"A"<<endl;
    }
    else if(marks>=70)
    {
        cout<<"B+"<<endl;
    }
    else if (marks>=60)
    {
        cout<<"B"<<endl;
    }
    else if(marks>=50)
    {
        cout<<"C"<<endl;
    }
    else if(marks>=40)
    {
        cout<<"D"<<endl;
    }
    else if(marks>=30)
    {
        cout<<"E"<<endl;
    }
    else
    {
        cout<<"F"<<endl;
    }

    return 0;
}