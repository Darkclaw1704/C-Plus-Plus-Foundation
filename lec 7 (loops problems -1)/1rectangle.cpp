#include <iostream>
using namespace std;

int main()
{
    int rows, columns, storedColumn, storedRows;
    cout<<"Number of rows : ";
    cin>>rows;
    cout<<"Number of columns : ";
    cin>>columns;
    storedRows=rows;
    cout<<endl<<"2 ways of doing this : "<<endl;
    
    for (;rows!=0;rows--){
        for (storedColumn=columns ;storedColumn!=0;storedColumn--){
            cout<<"*";
        }
        cout<<endl;
        storedColumn=columns;
    }

    cout<<endl<<endl;
    rows=storedRows;

    for (storedRows=1; storedRows<=rows; storedRows++){
        for (storedColumn=1;storedColumn<=columns;storedColumn++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}