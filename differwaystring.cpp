#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    string reversed;
    cin>>str;

    reversed = str;

    reverse(reversed.begin(),reversed.end());

    if(str==reversed)
    {
        cout<<"palindrome"<<endl;
    }

    else{
        cout<<"string isnt palindrome"<<endl;
    
    }
    return 0;
}