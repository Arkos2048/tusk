#include<iostream>
using namespace std;

int r;

int biotonic(int a[],int b[],int c[],int n)
{

for(int i = 0; i<n ; i++)
{
    for(int j = i+1; j<n; j++)
    {
            if(a[i]>a[j])
            {
                 swap(a[i],a[j]);
            }
    }
    b[i] = a[i];

     r = b[n-1];

 for(int i = 0;i<n; i++)
 {
    c[i] = b[n-i-1];
 }

 
    
    
}
 return 0;

}


int main()
{

int n;
cin>>n;
int a[1000];
int b[1000];
int c[1000];

for(int i = 0; i<n; i++)
{
    cin>>a[i];
}

biotonic(a,b,c,n);

int d[10000];



for(int i = 0; i<n; i++)
{
    d[i] = b[i];


    d[i+n] = c[i+1];
}



for(int i = 0; i<2*n-1;i++)
{
    cout<<d[i];
}

    return 0;
}