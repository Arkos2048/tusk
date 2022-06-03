#include<iostream>
#include<cstring>

using namespace std;

int main()
{
//alterenative from char is strings

string s0;
string s1("hello");

string s2 = "hello world";

string s3(s2);

string s4 = s3;

char a[] = {'a','b','c','d','\0'};

string s5(a);

cout<<s0<<endl;
cout<<s1<<endl;

cout<<s2<<endl;

cout<<s3<<endl;

cout<<s4<<endl;

cout<<s5<<endl;


if(s0.empty())
{
    cout<<"s0 is an empty string"<<endl;
}

//append

s0.append("I love c++");

cout<<s0<<endl;

s0+= "and python";

cout<<s0<<endl;

//remove

cout<<s0.length()<<endl;

s0.clear();

cout<<s0.length()<<endl;

//compare two strings

s0 = "apple";
s1 = "mango";

cout<<s0.compare(s1)<<endl; //returns an integer ==0 equal, > 0 or < 0
 
 
 //overloaded operator oeprators 

if(s1 > s0)
{
    cout<<"Mango is lexi greater than apple"<<endl;

}

cout<<s1[0]<<endl;
//find substrings


string s = " I have to have apple juice";

int idx = s.find("apple");

cout<<idx<<endl;


//remove a word from the string 

string word = "apple";

int len = word.length();

cout<<s<<endl;

s.erase(idx,len+1);

cout<<s<<endl;

//iterate over all the characters in the string 

for(int i = 0l; i<s1.length();i++)
{
    cout<<s1[i]<<":";
}
cout<<endl;

//iterators

for(auto it =s1.begin();it!=s1.end();it++)
{
    cout<<(*it)<<",";


}


//for each loop 

for(char c:s1){
    cout<<c<<".";
}
}
