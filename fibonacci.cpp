#include<iostream>
using namespace std;


// fiboacci series 
//0,1,1,2,3,5,8,13...
int n;



int fibonacci(int n){

int a = 0 ;

int b = 1;

int c;

for(int i = 1; i<=n-1;i++)
{
    c= a+b;

    a=b;
    b=c;


}
return c;
}

int main()
{
    cin>>n;
    
    cout<<fibonacci(n)<<endl;
    
    
}
