#include<iostream>
#include<algorithm>

using namespace std;

//define a comparator function
bool compare(int a, int b)
{
    cout<<"comparind"<<a<<"and"<<b<<endl;

    return a>b;
}


int main()
{

int i;


    int n,key;

    cin>>n;

    int a[1000];

for(int i =0;i<n;i++)
{
    cin>>a[i];
}

//sort an array using sort() function.
sort(a,a+n, compare );



 for(int i = 0;i<n;i++)
 {
     cout<<a[i]<<",";
 }
 
return 0;
}