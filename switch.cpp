#include<iostream>
using namespace std;

int main()
{
     //switch case
     /* design  a meniu - where pressing a button gives you the corresponding item 

     B- Burger
     M =-Maggi
     P - Pizza
     C- Coke
     D - Dosa
     ....


     an d all that gors

     */
    char ch;

    cin>>ch;

int pizza_orders = 0; 

    switch(ch)
    {
        case 'b':
        case 'B':cout<<"Brger"<<endl;

        break;
        
        case 'm':
        case 'M':cout<<"Maggi"<<endl;

        break;

        case 'p':
        case 'P':cout<<"Pizza"<<endl;
              pizza_orders++;
              
        break; 

        default : cout<<"Item is not available!"<<endl;

    }
}