
#include<bits/stdc++.h>
using namespace std;

void segregate0and1(int arr[],int n)
{
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            count++;
    }

    for(int i=0;i<count;i++)
        arr[i]=0;
    for(int i=count;i<n;i++)
        arr[i]=1;
}

int main()
{
    int arr[] = { 0, 1, 0, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    segregate0and1(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
