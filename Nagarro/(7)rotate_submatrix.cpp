#include<bits/stdc++.h>
using namespace std;

void matrixPrint(int matrix[10][10],int row,int col)
{

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void rotateSubmatrix(int row,int col,int matrix[10][10],int x,int y,int N)
{
    if(N==1)
        return;



    int k=0;


    //transpose


    for(int i=x;i<(x+N);i++)
    {
        for(int j=y+k;j<(y+N);j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        k++;
    }



    //mirror image of transpose matrix


    for(int i=x;i<(x+N);i++)
    {
        for(int j=y;j<(y+N)/2;j++)
        {
            swap(matrix[i][j],matrix[i][j+N-1]);
        }
    }
}
int main()
{
    int matrix[10][10];

    int row,col,x,y,N;

    cin>>row >>col;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>matrix[i][j];
        }
    }


    cin>>x>>y>>N;

    rotateSubmatrix(row,col,matrix,x,y,N);
    matrixPrint(matrix,row,col);
}
