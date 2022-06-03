#include<iostream>
using namespace std;

int main()

{
    //problem - unique number 2N+1
    //Given a list of numbers where every numbers occures twice except one, find that unique number
    //
int n;

cin>>n;


int no;
int ans = 0;


// bitwise xor operator to solve
//helped to not to store NY  storage 

for(int i = 0; i<n; i++)
{
  cin>>no;
  ans = ans^no;

}

cout<<ans<<endl;


return 0;

}