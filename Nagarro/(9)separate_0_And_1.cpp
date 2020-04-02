
#include<bits/stdc++.h>
using namespace std;

void segregate0and1(int arr[],int n)
{
    int type0=0,type1=n-1;

    while(type0<type1)
    {
        if(arr[type0]==1)
        {
            swap(arr[type0],arr[type1]);
            type1--;
        }
        else
            type0++;
    }

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

