#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char a[100][100];

    //read a list of strings and we will store them in a 2D character array

    int n;
    cin>>n;

    cin.get();
    for(int i = 0; i<n ; i++)
    {
        cin.getline(a[i], 1000);

    }

    //print out all the strings
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;

    }
}