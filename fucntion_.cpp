#include<iostream>

using namespace std;




void sayHello()
{
    cout<<"hello everyone!"<<endl;

}


int factorial(int n){
    int ans = 1;

    for(int i=2;i<=n;i++)
    {
        ans = ans*i;
    }
    return ans;

}

int main()
{
    cout<<"before function"<<endl;
    sayHello();

    cout<<"after the fgunction"<<endl;


//2 

int n;
 cout<<"Enter a number";
 cin>>n;
factorial(n);

cout<<factorial(n)<<endl;




    return 0;


}