#include<bits/stdc++.h>
using namespace std;


int main()
{
    int freq[26]={0};
    string input;
    cin>>input;
    for(int i=0;input[i];i++)
    {
        freq[input[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            cout<<(char)(i+'a')<<freq[i]<<" ";
        }
    }

    return 0;
}
