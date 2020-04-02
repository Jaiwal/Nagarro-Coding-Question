
#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;

int LCSubStr(string X,string Y,int i,int j,int count)
{
    if(i==0||j==0)
        return count;

    if(X[i-1]==Y[j-1])
    {
        count=LCSubStr(X,Y,i-1,j-1,count+1);
    }
    count=max(count,max(LCSubStr(X,Y,i-1,j,0),LCSubStr(X,Y,i,j-1,0)));

    return count;
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



    cout<<"Lenth of longest common substring is : "<<LCSubStr(str1,str2,m,n,0);
    return 0;
}

