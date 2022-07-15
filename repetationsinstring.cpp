#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string str;
    cout<<"enter string";

    getline(cin,str);
    int count = 0;

    for(int i = 0; i<str.length();i++)
    {
        count =0;

        for(int j = 0; j<str.length();j++)
        {
            if(j<i && str[i]==str[j])
            {
            break;
            }
            if(str[i]==str[j])
            {
                count++;

            }
        }
        if(count!=0)
        cout<<str[i]<<" Used Number of Time "<<count<<endl;

       
    }
}