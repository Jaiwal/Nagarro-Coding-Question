#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
void spiralPrint(int arr[R][C],int i,int j,int m ,int n)
{

    if(i>=m||j>=n)
        return;

    int p;

    for(p=i;p<n;p++)
    {
        cout<<arr[i][p]<<" ";
    }

    for(p=i+1;p<m;p++)
    {
        cout<<arr[p][n-1]<<" ";
    }

    if((m-1)!=i)
    {
        for(p=n-2;p>=j;p--)
            cout<<arr[m-1][p]<<" ";
    }
    if((n-1)!=j)
    {
        for(p=m-2;p>i;p--)
        cout<<arr[p][j]<<" ";
    }
    spiralPrint(arr,i+1,j+1,m-1,n-1);

}
int main()
{
    int a[R][C] = { { 1, 2, 3, 4 },
                    { 7, 8, 9, 10 },
                    { 13, 14, 15, 16},
                    { 13, 14, 15, 16}  };

    spiralPrint(a,0,0,R,C);
    return 0;
}

