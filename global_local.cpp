#include<iostream>
using namespace std;

//scope - defined for variables(accesible -> lifetime and visiblity )
//local scope
//global scope

int x = 100;
//global scope

int main()
{
   int x = 10;
   cout<<x <<endl;

    for(int x = 0; x<=5;x++){
        cout<<"Loop scope"<<x<<endl;

    }

    cout<<"Local X"<<x<<endl;

    cout<<"Global x"<<::x<<endl;

}