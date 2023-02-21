#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout<<"Enter letter to check for vowel : ";
    cin>>letter;
    switch (letter){
        case 'a':
            cout<<"Letter is a vowel : 'a'"<<endl;
            break;
        case 'e':
            cout<<"Letter is a vowel : 'e'"<<endl;
            break;
        case 'i':
            cout<<"Letter is a vowel : 'i'"<<endl;
            break;
        case 'o':
            cout<<"Letter is a vowel : 'o'"<<endl;
            break;
        case 'u':
            cout<<"Letter is a vowel : 'u'"<<endl;
            break;
        
        default:
            cout<<"Letter is CONSOTANT !"<<endl;

    }
    
    cout<<"OR"<<endl;

    ((letter=='a')||(letter=='e')||(letter=='i')||(letter=='o')||(letter=='u')) ? cout<<"Vowels"<<endl : cout<<"Consotant"<<endl;

    return 0;
}