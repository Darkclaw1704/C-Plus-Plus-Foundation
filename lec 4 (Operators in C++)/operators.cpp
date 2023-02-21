/* arithmetic operator in c++


= - * / % 


++ Increment =  a++
                a=3 --> a=4
-- Decrement = a--
                a=3 --> a=2


RELATIONAL OP.

==
!=
>
<
<= lesser than equal to
>= greater than equal to


LOGICAL OP.

&& - and operator 
|| - or operator
! - not opertor

Assignment op. 

+=
-=
*=
/=

Bitwise op.

~ bitwise complement    (binary to decimal)
<<n left shift   (multiplied by 2**n)
>>n right shift  (divided by 2**n)

eg:
a<<b (a*(2**b))
a>>b (a/(2**b))

| bitwise OR 
& bitwise AND 
^ bitwise exclusive OR 

eg:
    1010
  & 0110
---------
    0010
---------



*/
/*
#include <iostream>
using namespace std;

int main(){

    int num1=5;
    int num2=2;
    cout<<"arithematic op."<<endl<<endl;
    cout<<"sum: "<<num1+num2<<endl;
    cout<<"increment: "<<num2++<<endl;
    cout<<"num2 : "<<num2<<endl;
    cout<<"divide: "<<num1/num2<<endl<<endl;

    cout<<"realtional op."<<endl;
    cout<<(num1==num2)<<endl;   //false
    cout<<(num1!=num2)<<endl;   //true
    cout<<(num1<num2)<<endl;    //false
    cout<<(num1>=num2)<<endl<<endl;   //true

    cout<<"Logical op."<<endl;
    
    bool st1=true; //exp1
    bool st2=false; //exp2

    cout<<(st1&&st2)<<endl; //false
    cout<<(st1||st2)<<endl; //true
    cout<<(!st2)<<endl<<endl; //true

    cout<<"assignment op."<<endl<<endl;
    cout<<(num1+=3)<<endl<<endl;

    num1=5; //0101
    num2=8; //1000

    cout<<"Bitwise op."<<endl<<endl;
    cout<<(num1<<1)<<endl; //10
    cout<<(num1>>1)<<endl; //2
    
    cout<<(num1&num2)<<endl; //0
    cout<<(num1|num2)<<endl; //1101 = 13
    
    
    return 0;

}

*/