#include<iostream>
using namespace std;

bool isPrime(int n)
{
    
              
    
    int i;
    for(i = 2;i<=n-1;i++)
    {
        if(n%i == 0) {
            return false;
            
        }
        
    }
return true;
}
    
void printprimes(int N)
{

    for(int i = 2;i<=N;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    
    int n;
    cin>>n;
    
   printprimes(n);

 
}
