#include <iostream>
using namespace std;

int main(){
    char operation;
    float num1, num2;
    cout<<"Enter an operation (+,-,*,/) : ";
    cin>>operation;
    cout<<"Enter 1st number : ";
    cin>>num1;
    cout<<"Enter 2nd number : ";
    cin>>num2;

    switch (operation){
        case '+':
            cout<<num1<<" "<<operation<<" "<<num2<<" = "<<(num1+num2)<<endl;
            break;
        case '-':
            cout<<num1<<" "<<operation<<" "<<num2<<" = "<<(num1-num2)<<endl;
            break;
        case '*':
            cout<<num1<<" "<<operation<<" "<<num2<<" = "<<(num1*num2)<<endl;
            break;
        case '/':
            cout<<num1<<" "<<operation<<" "<<num2<<" = "<<(num1/num2)<<endl;
            break;
        default:
            cout<<"System don't recgnise this !"<<endl;
            break;
    }

    return 0;
}