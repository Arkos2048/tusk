#include<iostream>

using namespace std;

int main()
{
      //comma operatir 

      int a,b,c;

      //assignment operator 

      a =10;
      b= 20;

      //logical operator

      if(c>30 and c<20)
      {
          cout<<"C is largest"<<endl;

      }

      //ternary operator 
      int x = c%2 == 0?1:0;
cout<<x<<endl;

      c%2==0?cout<<"Even":cout<<"Odd";

 //bitwise operator 

 x= 5;
 int y =7;

 cout<<"AND "<< (x&y) <<endl;

 cout<<"OR "<< (x|y) <<endl;

 cout<<"XOR "<< (x^y) <<endl;
  

  // shift operator 

  x = x<<2;

  cout<<x<<endl; //20

  cout<< (y>>1)<<endl; //3

  //unary operator

//address of 
cout<< (&x) <<endl;

//post increment / decrement operator 

 a= 10;
 int z = a++;  //z = 10 , a = 11

 cout<<z<<endl;

 z = ++a; // z = 12, a = 12
 
 cout<<z<< endl;

// compound assignment operator 
 a = 10;
 a*=3;
 
 cout<<"A after multiply "<<a<<endl; //30

 a %=5;

 cout<<"A after modulo "<<a<<endl; //0

b = 5;
b<<=1;

cout<<"B after left shift"<<b<<endl;//10

}