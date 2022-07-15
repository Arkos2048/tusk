#include <bits/stdc++.h>
using namespace std;
/*
bool SubSeq(string pat,string s2,int n,int m)
{

if(n<m)
{
    return false;

}

int j = 0; 

for(int i = 0; i<pat.length() && i<s2 .length();i++)
{
    if(pat[i]==s2[j])
    j++;

return(j==m);
}

}
*/
bool isSubSeqRec(string pat,string s2,int n,int m)
{
    if(m==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;

    }
    if(pat[n-1]==s2[m-1])
    return isSubSeqRec(pat,s2,n-1,m-1);



else
return isSubSeqRec(pat,s2,n-1,m);

}




int main(void)
{
 
  string pat;
  string s2;

int n = pat.length();
int m = s2.length();

getline(cin,pat);
getline(cin,s2);



if(isSubSeqRec(pat,s2,n,m))
cout<<"yes";

else
cout<<"no";

return 0;
}