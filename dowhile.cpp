#include<iostream>
using namespace std;

int main()

{
    int cliff_end = 10;
    int x = 10;
//do while executes at least one.
//exit control loop doesnot check for init condition is true or false.
    do{
        x=x+1;
        cout<<"taking 1 step reaching :"<<x <<endl;

    }
    while(x<cliff_end);

cout<<"final x"<<x<<endl;




}
