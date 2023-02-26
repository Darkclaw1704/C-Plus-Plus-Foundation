#include <iostream>
using namespace std;

int main()
{
    for(int number=1; number<=5; number++){
        if (number==3){
            continue;
        }
        cout<<number<<endl;
    }
    return 0;
}