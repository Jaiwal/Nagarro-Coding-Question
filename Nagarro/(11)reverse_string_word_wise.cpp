#include<iostream>
#include<cstring>
using namespace std;

void reverseString(string &s , int i, int j)
{

   while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
void reverseStringWords(string &s)
{
    int word_begin = 0;
    int i;

    for( i=0;s[i]!='\0';i++)
    {

        if(s[i]== ' ')
        {
            reverseString(s, word_begin,i-1);

            if(s[i+1]!= '\0')
            {
                 word_begin = i+1;
            }
        }


    }
    if(s[i]=='\0')
    {
        reverseString(s,word_begin, i-1);
    }
    reverseString(s,0,i-1);
}
int main()
{
    string input;
    getline(cin,input);

    reverseStringWords(input);
    cout<<input;


	return 0;
}




