#include<iostream>

using namespace std;

//selection sort

void selection_sort(int a[], int n)
{
    for(int i = 0; i<n-1;i++)
{
    int min_index = i;

    for(int j=i;j<=n-1;j++)
    {
         if(a[j]<a[min_index]){
             min_index = j;

         }
    }
    //after this loop we can do swap finally 

    swap(a[i], a[min_index]);

}
}
int main()
{
 
int i;
// linear search

    int n,key;

    cin>>n;

    int a[1000];

for(int i =0;i<n;i++)
{
    cin>>a[i];
}

selection_sort(a,n);
 for(int i = 0;i<n;i++)
 {
     cout<<a[i]<<",";
 }
 
return 0;

}