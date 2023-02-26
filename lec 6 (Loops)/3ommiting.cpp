#include <iostream>
using namespace std;

int main()
{   int initialize=1;
    for( ; initialize<=5; initialize++){
        cout<<initialize<<endl;
    }
    cout<<endl;
    for(int initialize=1; ;initialize++){
        //since nothing is stopping this code, this block should include my stopping condition
        cout<<initialize<<endl;
        break;
    }
    cout<<endl;
    for(int initialize=1; initialize<=5; ){
        cout<<initialize<<endl;
        initialize++;
    }
    cout<<endl;
    for(int forward=0,backward=0 ; forward<=5, backward>=-5 ; forward++, backward--){
        cout<<forward<<" "<<backward<<endl;
    }
    return 0;
}