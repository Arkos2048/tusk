#include<iostream>
using namespace std;


//define a comparator function
bool compare(int a, int b)
{
    cout<<"comparind"<<a<<"and"<<b<<endl;

    return a>b;
}


void bubble_Sort(int a[], int n, bool (&cmp)(int a, int b))
{
    //N-1 iteration large elements to the end

    for(int itr = 1; itr <= n-1; itr++){

        //pairwise swapping in the unsorted of array
        for(int j = 0; j =(n-itr-1); j++){
            if(cmp(a[j],a[j+1]))
            {
            swap(a[j],a[j+1]);
            }
        }
    }
}
 int main()
//bubble sort algo
 {
int i;


    int n,key;

    cin>>n;

    int a[1000];

for(int i =0;i<n;i++)
{
    cin>>a[i];
}

 bubble_Sort(a,n, compare);
 for(int i = 0;i<n;i++)
 {
     cout<<a[i]<<",";
 }
 
return 0;
 }