#include <iostream>
using namespace std;

int main(){
    int costPrice, sellingPrice;
    cout<<"Enter cost price : ";
    cin>>costPrice;
    cout<<"Enter selling price : ";
    cin>>sellingPrice;

    (sellingPrice>=costPrice) ? cout<<"Profit = "<<(sellingPrice-costPrice)<<endl : cout<<"Loss = "<<(costPrice-sellingPrice)<<endl;
    return 0;
}