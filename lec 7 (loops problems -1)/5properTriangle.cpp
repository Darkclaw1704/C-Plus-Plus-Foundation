#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter number : ";
    cin>>number;
    
    for (int stars=1; stars<=number; stars+=2){
        int spaces=(number-stars)/2;

        for (int copySpaces=1; copySpaces<=spaces; copySpaces++){
            cout<<" ";}
        for (int copyStars=1; copyStars<=stars; copyStars++){
            cout<<"*";}
        //copySpaces=1;
        for (int copyEndSpaces=1; copyEndSpaces<=spaces; copyEndSpaces++){
            copyEndSpaces!=spaces ? cout<<" " : cout<<" "<<endl;}
    }
}