#include<iostream>

using namespace std;

int main()
{
    int x =10;

    cout<< &x<<endl;


    float y = 10.5;
    cout<<&y<<endl;


//doesnot work for character variables
char ch = 'A';

//explicit typecasting from char* to void*

cout<<(void *)&ch<<endl;

}