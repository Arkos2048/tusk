#include<iostream>
using namespace std;


void printABCDPattern()
{
int n;

cin>>n;

    for(int i = 1; i<=n;i++){
        int cnt_alpabets = n-i+1;
        char alphabet = 'A';

         for(int j = 1; j <=cnt_alpabets;j++)
         {
             cout<<alphabet;
             alphabet = alphabet + 1;

         }
         cout<<endl;

    }

}
int main()
{



printABCDPattern();


return 0;

}