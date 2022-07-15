#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
/*NAIVE APPROACH
void leftmost(string &str)
{
    for(int i= 0; i<str.length(); i++)
    {
        for(int j = i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                cout<<i;

            }
        }
    }
    cout<<-1;

    
}
*/
const int CHAR = 256;

int leftmost(string& str)
{
  bool visited[CHAR];
  
  for(int i = 0 ; i< CHAR ; i++){
    visited[i] = false;

    //tracerse from right and update res as soon
    //as we see a visited character
   int res = -1;
   for(int i = str.length()-1; i>=0; i--)
   {
    if(visited[str[i]] == false)
    visited[str[i]] = true;

    else
    res = i;

   }
   return res;

  
}


int main()
{
string str;
cin>>str;

if(index == -1)
 cout<<"either all charachters are distinct or string is empty";

 else

 cout<<"first repeating character is" %c, str[index];

return 0;

}