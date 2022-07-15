#include <bits/stdc++.h>

using namespace std;

bool areRot(string &pat,string&s2)
{
    if(pat.length()!=s2.length())
    return false;

    else

    return ((pat+pat).find(s2)!=string::npos);
}

int main()
{
    string pat = "ABCD";
    string s2 = "CDAB";

    if(areRot)
    {
        cout<<"right";
    }
    else
    {
        cout<<"wrong";
    }

    return 0;
}