#include<iostream>
#include<cstring>
using namespace std;
/* Questions - read N, followed by N strings and pritn the largest srtring and size
int main()
*/

int main(void)
{

int n;
 cin>>n;


char a[1000];

char largest[1000];

int len = 0;

int largest_len = 0;

cin.get();

 for(int i = 0; i < n; i++)

{
    cin.getline(a, 1000);

   len = strlen(a);
   if(len>largest_len)
   {
       largest_len = len;
       strcpy(largest,a);  
   }    
}


cout<<largest<" and "<< largest_len<<endl;



    return 0;

}