
/*

Given 2 matrices. One big matrix(say, A) and one small matrix(say, B). You need to find out whether the smaller one matrix is the sub-matrix(part) of bigger matrix.
Input:

Matrix A=
1   2   3   4

5   6   7   8

9  10 11 12

13 14 15 16




Matrix B =
6   7    8

10 11 12

14 15 16

Output: YES



*/

#include<iostream>
using namespace std;

bool checkSubmatrix(int row, int col, int big[10][10] , int srow, int scol , int Small[10][10])
{
    //
    if(srow > row || scol >col)
    {
        return false;
    }
    int r =0, c =0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(Small[r][c] == big[i][j] && c< scol)
            {
                c++;
            }
            else if(c<scol)
            {
                c=0;
            }
        }
        if(c == scol && r<srow)
        {
            c=0;
            r++;
        }
        else if(c< scol && r<srow)
        {
            c=0;
            r=0;
        }
        else if(r== srow )
        {
           // c = scol;
            return true;
        }

    }
    if(r < srow )
    {
        return false;
    }

}
int main()
{
    int Big[10][10] , Small[10][10];
    int row, col, srow, scol;
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>Big[i][j];
        }
    }
    cin>>srow>>scol;
    for(int i=0;i<srow;i++)
    {
        for(int j=0;j<scol;j++)
        {
            cin>>Small[i][j];
        }
    }
    if(checkSubmatrix(row,col,Big, srow,scol,Small))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }


	return 0;
}

/*

4 4
1  2  3  4

5  6  7  8

9  10 11 12

13 14 15 16

3 3
6  7  8

10 11 12

14 15 16

1 4
1  2  3  4

2 3
2  3  4

6  7  82
*/
