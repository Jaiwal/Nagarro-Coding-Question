
#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;

int LCSubStr(string X,string Y,int m,int n)
{
    int LCSuff[m+1][n+1];
    int result=0;


    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {


            if(i==0||j==0)
                LCSuff[i][j]=0;
            else if(X[i-1]==Y[j-1])
            {


                LCSuff[i][j]=1+LCSuff[i-1][j-1];
                result=max(result,LCSuff[i][j]);

            }
            else
                LCSuff[i][j]=0;

        }
    }
    return result;

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



    cout<<"Lenth of longest common substring is : "<<LCSubStr(str1,str2,m,n);
    return 0;
}
