#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
/*

Given a string with some words, print the occurrence of each words.
Eg: ‘what do you do’

Ans: what=1, do=2, you=1

*/
// O(n)
void occurrence_of_words(string str)
{
    string substring;
    unordered_map<string, int> m;
    int i;
    for( i=0;str[i]!='\0';i++)
    {

        if(str[i]!= ' ')
        {
            substring += str[i];
        }
        if(str[i]== ' ')
        {
            m[substring]++;
            substring = "";
        }
    }
    if(str[i]== '\0')
    {
         m[substring]++;
         substring = "";
    }
    for(auto itr: m)
    {
        cout<<itr.first<<"="<<itr.second<<", ";
    }
}
int main()
{
    string input;
    getline(cin,input);
    occurrence_of_words(input);


	return 0;
}

/*

I am going to college

*/



