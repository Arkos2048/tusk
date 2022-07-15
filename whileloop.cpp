#include<iostream>

using namespace std;


int main()
{
    int cliff_end = 10;

    int x = 0;



while(x<cliff_end)
{
    x=x+1;
cout<<"taking 1 step"<< x<<endl;

}
//loop stops when x>10;
cout<<"final position is "<<x<<endl;

if(x==cliff_end)

{
    cout<<"standing on the edge"<<endl;

}

else if(x>cliff_end)
{
    cout<<"u r ded"<<endl;
}
return 0;
}

