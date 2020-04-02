
#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;

void LCSubStr(string X,string Y,int m,int n)
{
    int LCSuff[m+1][n+1];
    int len=0;
  int row,col;

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {


            if(i==0||j==0)
                LCSuff[i][j]=0;
            else if(X[i-1]==Y[j-1])
            {


                LCSuff[i][j]= 1 + LCSuff[i-1][j-1];

                if(len<LCSuff[i][j])
                {
                    len=LCSuff[i][j];
                    row=i;
                    col=j;
                }


            }
            else
                LCSuff[i][j]=0;

        }
    }
    if(len==0)
    {
        cout<<"NO common substring";
        return;
    }

    char *resultStr=(char*)malloc((len+1)*sizeof(char));


    while(LCSuff[row][col]!=0)
    {
        resultStr[--len]=X[row-1];
        row--;
        col--;
    }
    resultStr[len]='\0';
  //  cout<<"length of longest common substring is"<<len;
cout<<resultStr;

}

int main()
{

    string str1,str2;

    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<endl;
    cout<<"Enter second string: ";
    getline(cin,str2);

  int m= str1.length();
   int n= str2.length();



  LCSubStr(str1,str2,m,n);
    return 0;
}

