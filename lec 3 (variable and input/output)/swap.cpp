#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"enter 1st number : ";
    cin>>num1;//>>"Type 1st number : ";
    cout<<"enter 2nd number : ";
    cin>>num2;//>>"Type 2nd number : ";
    
    int num3;

    num3=num1;
    num1=num2;
    num2=num3;

    cout<<"swapped number 1 : "<<num1<<endl;
    cout<<"swapped number 2 : "<<num2<<endl;
    
    return 0;

}