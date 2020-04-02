#include<bits/stdc++.h>
using namespace std;


void reverseStringWords(char s[])
{
    stack<char *>s1;
    char *token=strtok(s," ");

    while(token!=NULL)
    {
        s1.push(token);
        token=strtok(NULL," ");
    }

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}
int main()
{
    char  s[]="hi there";

    reverseStringWords(s);



	return 0;
}





