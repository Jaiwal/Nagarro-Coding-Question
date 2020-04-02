
#include<bits/stdc++.h>
#include<map>
using namespace std;


int main()
{
    map<char,int> myMap;
    string input;
    cin>>input;
    for(int i=0;input[i];i++)
    {
        myMap[input[i]]++;
    }
    for(auto node : myMap)
    {
        cout<<node.first<<node.second<<" ";
    }


    return 0;
}
