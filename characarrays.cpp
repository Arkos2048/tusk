#include<iostream>
using namespace std;

int main()
{


int b[] = {1,2,3};

cout<<b<<endl; //starting address of the array 

char a[10] = {'a','b','c','d','\0'}; 

cout<< a <<endl; //contents of the array .unless u find a nul character in the array \0.


//input 

//char s[10]; //automatically the null character added to it.
//cin>>s;

//cout<<s;

char s1[] = {'h','e','l','l','o'};  //doesnot terminate with null
char s2[] = "hello"; //another way

cout<<s1<<" "<<sizeof(s1)<<endl; //5 bytes

cout<<s2<<" "<<sizeof(s2)<<endl;  //6 bytes

char s3[10] = "hello";
char s4[10];

cin>>s4;


    return 0;

}