#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
int flag;
int s = 0;
int l = 0;
int n = 0;
void lower_string(string &str)
{
	for(int i=0;str[i]!='\0';i++)
    
	{
		if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
			       //converting uppercase to lowercase
                
                s++;

    
		else if (str[i] >= 'a' && str[i] <= 'z')   //checking for lowercase characters
	               
                   l++;
          
          else {

            n++;
            if(n==0)
            
                
            
          }

    	        //converting lowercase to uppercase  
    
    }

    cout<<"lowercase is"<<s;
    cout<<"uppercase is"<<l;
 cout<<"anycase is"<<n;
}

int main()
{
	string str;
    cout<<"Enter the string ";
    getline(cin,str);
   
lower_string(str);
	return 0;
}