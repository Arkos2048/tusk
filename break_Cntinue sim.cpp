#include<iostream>

using namespace std;

int main()
{

    //break - that is used to stop a loop based upon certain conditions

    // problem statement - read a stream of numbers until you get a multiple of 7
    int no;

    //accept and print numbers until you get a number of multiple of 7 , and skip all numbers which ares multiple of 13 and 7.
    while(true)
    {
        //no stooping
        cin>>no;

if(no%13==0)
{
    //stop processing more numbers;
    continue;//take you to line number 14,skip 21
    //starting of the loop!
}
if(no%7==0)
{
    break;//only once, as comes out of the loop.
}
cout<<"No "<<no<<endl;

    }

    cout<<"came out of the loop "<<endl;

}