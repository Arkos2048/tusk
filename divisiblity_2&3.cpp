#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;


//program to checl if numhber is divisible by 2,3 and both \

if(n%2==0 || n%3==0)
{
    cout<<"divisible by both"<<endl;
}
if(n%2==0)
{
cout<<"divisible by 2"<<endl;

}

else 
{
    cout<<"not divisible by 2"<<endl;

}

if(n%3==0)
{
    cout<<"divisbile by 3"<<endl;


}
else 
{
    cout<<"not divisbile by 3"<<endl;

}

return 0;
}
