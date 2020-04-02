#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
void printwave(int arr[R][C],int m)
{
    int i,j=m-1,wave=1;

    while(j>=0)
    {
        if(wave==1)
        {
            for(int i=0;i<m;i++)
                cout<<arr[i][j]<<" ";

            wave=0;
            j--;
        }
        else if(wave==0)
        {
            for(int i=m-1;i>=0;i--)
                cout<<arr[i][j]<<" ";

            j--;
            wave=1;
        }
    }
}


int main()
{

  /*  int n;
    cin>>n;
    int** p = new int*[n];
    for(int i = 0; i < n; ++i)
   p[i] = new int[n];




    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>p[i][j];
        }
    } */
        int arr[R][C] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };

    printwave(arr,4);
}
