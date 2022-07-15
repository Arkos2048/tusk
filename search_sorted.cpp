#include<iostream>

using namespace std;

const int MAX = 100;

void binarySearch(int a[][MAX],int n, int m, int k, int x)
// x is the row number

{
    //now we simply have to apply a binary search as we
    //did in 1 - D array, for the elements in row
    //number
    //x

    int l = 0;
    int r = m-1;
    int mid;

    while(l<=r)
    {
       int mid = (l+r)/2;

        if(a[x][mid] == k)
        {
            cout << " found at ("<< x <<","<< mid <<")"<<endl;
            return;
        }

        if(a[x][mid] > k)
        r = mid -1;

        if(a[x][mid]<k)
        l = mid+1;

        
    }

    cout<<"element not found"<<endl;
}

void findRow(int a[][MAX], int n, int m, int k) 
{
int l = 0; 
int r = n-1;
int mid;

while( l<=r)
{
    mid = (l+r)/2;

    //we'll check the left and
    //right most elements
    //of the row itself
    //for efficiency

    if(k == a[mid][0]) //checking leftmost element
    {
        cout<<" found at ("<<mid <<",0)" <<endl;
        return;
    }

    if(k == a[mid][m-1]) //checking righmtost element
    
    {
        int t = m-1;
        cout<<"found at("<<mid<<","<<t<<")"<<endl;
        return;
    }

    if(k> a[mid][0] && k < a[mid][m-1])
    //this means the element
    //must be within this row
    {
        binarySearch(a,n,m,k,mid);
        //we'll apply binary 
        //search on this row
        return;

    }
    if( k < a[mid][0])
     r= mid -1;
     if(k>a[mid][m-1])
     l = mid+1;
}

}






int main()
{
    int n = 4; // no. of rows
    int m = 5; // no. of columns
 
    int a[][MAX] = {{0, 6, 8, 9, 11},
                    {20, 22, 28, 29, 31},
                    {36, 38, 50, 61, 63},
                    {64, 66, 100, 122, 128}};
 
    int k = 31; // element to search
 
 
    findRow(a, n, m, k);
     
    return 0;
}
