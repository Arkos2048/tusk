#include<iostream>

using namespace std;

int j;

int main()
{
    int n;
    cin>>n;

    int a[1000];

    int maximumSum = 0;
    int currentSum = 0;


int left = -1;
int right = -1;

    for(int i= 0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i = 0;i<n;i++)
    {
        for(int j = i; j<n;j++)
        {
             //elements of subarray(i,j)
            currentSum = 0;

            for(int k = i;k<=j;k++)
            {
                currentSum += a[k];
                

            }
            cout<<currentSum<<endl;

        }
        //update maximumSum if cs>Maximumsum

        if(currentSum>maximumSum){
            maximumSum = currentSum;
            left = i ;
             right = j;

        }

    }


cout<<"maximumSum is"<<maximumSum<<endl;

for(int k = left; k <=right ;k++)
{
    cout<<a[k]<<" "<<endl;
}

return 0;
}