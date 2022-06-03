#include<iostream>

using namespace std;

int main()
{

    //break - that is used to stop a loop based upon certain conditions

    // problem statement - read a stream of numbers until you get a multiple of 7
    int no;

    
    while(true)
    {
        //no stooping
        cin>>no;

if(no%7==0)
{
    //stop processing more numbers;
    continue;//take you to line number 14,skip 21
    //starting of the loop!
}
cout<<"No "<<no<<endl;

    }

    cout<<"came out of the loop "<<endl;

}