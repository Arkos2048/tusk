#include<iostream>

using namespace std;


void insertion_sort(int arr[], int n)

{


    for(int i = 0; i<=n-1;i++)

    {
        int e = arr[i];

        //place the current element at 'right' position, in the sorted part.

        int j = i - 1;

        while(j> =0 and arr[j] > e)
        {
            a[j+1] = a[j];
            j = j-1;

        }
        a[j+1] = e;
    }
}
int main(){

int i;
// insertion sort

    int n,key;

    cin>>n;

    int a[1000];

for(int i =0;i<n;i++)
{
    cin>>a[i];
}

insertion_sort(a,n);
 for(int i = 0;i<n;i++)
 {
     cout<<a[i]<<",";
 }
 
return 0;


}