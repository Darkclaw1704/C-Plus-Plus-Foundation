#include <iostream>
using namespace std;

int main()
{
    int today;
    cout<<"Enter today's day number [enter 5]: ";
    cin>>today;

    switch (today)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thursday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        //break;
    default:
        cout<<"Don't know which day ? "<<endl;
        break;
    }

    return 0;
}