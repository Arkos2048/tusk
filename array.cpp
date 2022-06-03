#include<iostream>

using namespace std;

int main()
{

    int a[10] = {0};



cout<<sizeof(a)<<endl;
int n = sizeof(a) / sizeof(int);

cout<<n<<endl;

    for(int i = 0; i<5; i++)
    {
        cin>>a[i];

    }
//updation 

a[8] = 100;

    for(int i = 0;i<n;i++)

    {
        cout<<a[i]<<" ,";
    }

}
