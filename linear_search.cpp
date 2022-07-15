#include<iostream>
using namespace std;

int main()
{

int i;
// linear search

    int n,key;

    cin>>n;

    int a[1000];

for(int i =0;i<n;i++)
{
    cin>>a[i];
}

cout<<"element u want to seatch"<<endl;

cin>>key;

for(int i = 0;i<=n-1;i++)
{
    if(a[i] == key)
    {
        cout<<key<<" found at "<<i<<endl;

        break;

    }
}
if(i==n)
{
    cout<<"key not present in array"<<endl;

}
}