#include <iostream>
using namespace std;

int main()
{   
    int rows,columns;
    cout<<"Enter rows : ";
    cin>>rows;
    cout<<"Enter columns : ";
    cin>>columns;

    for (int copyRows=1; copyRows<=rows; copyRows++){
        for (int copyColumns=1; copyColumns<=columns; copyColumns++){
                copyRows==1 || copyRows==rows || copyColumns==1 || copyColumns==columns ? cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
}
