#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
void print(int arr[R][C])
{
    for(int i=0;i<R;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<R;j++)
                cout<<arr[i][j]<<" ";
        }
        else
        {
            for(int j=R-1;j>=0;j--)
                cout<<arr[i][j]<<" ";
        }
    }
}



int main()
{
    int mat[][] = { { 10, 20, 30, 40 },
                    { 15, 25, 35, 45 },
                    { 27, 29, 37, 48 },
                    { 32, 33, 39, 50 } };

    print(mat);
    return 0;
}
