#include<bits/stdc++.h>
using namespace std;
#define NO_OF_CHAR 256
int nonrepeating(char *str)
{
    pair<int,int> arr[NO_OF_CHAR];

    for(int i=0;str[i];i++)
    {
        (arr[str[i]].first)++;
        arr[str[i]].second=i;
    }
    int res=INT_MAX;

    for(int i=0;i<NO_OF_CHAR;i++)
    {
        if(arr[i].first==1)
            res=min(res,arr[i].second);
    }
    return res;
}
int main()
{
    char str[]="HappyPyaarDivas";

    int index=nonrepeating(str);

    if(index==INT_MAX)
        cout<<"All character are repeating or empty string";
    else
        cout<<"The firsr non-repeating character is: "<<str[index];
}
