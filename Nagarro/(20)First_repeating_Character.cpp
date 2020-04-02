#include<bits/stdc++.h>


using namespace std;
char getfirstRepeatingcharacter(string &str)
{
    unordered_set<char>h;

    for(int i=0;str[i];i++)
    {
        char c=str[i];

        if(h.find(c)!=h.end())
        {
            return c;

        }
        else
            h.insert(c);
    }
    return '\0';

}
int main()
{
    string str;
    cin>>str;
    cout<<getfirstRepeatingcharacter(str);
    return 0;
}
