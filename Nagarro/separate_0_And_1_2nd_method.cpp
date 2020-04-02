
#include<bits/stdc++.h>
using namespace std;

void segregate0and1(int arr[],int n)
{
    int left=0,right=n-1;

    while(left<right)
    {
        while(arr[left]==0&&left<right)
            left++;
        while(arr[right]==1&&left<right)
            right--;

        if(left<right)
        {
            arr[left]=0;
            arr[right]=1;
            left++;
            right--;
        }
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
