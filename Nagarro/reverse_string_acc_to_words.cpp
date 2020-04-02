#include<iostream>
#include<cstring>
using namespace std;
/*

Reverse the string according to its words
Input: programming is fun

Output: fun is programming




*/
void reverseString(string &s , int i, int j)
{
   // int len = s.length();
   //int i=0 , j= len -1;
   while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
void reverseWords(string &s)
{
    int word_begin = 0;
    int i;

    for( i=0;s[i]!='\0';i++)
    {
        //substring += temp;
        //temp = s[i];
        if(s[i]== ' ')
        {
            reverseString(s, word_begin,i-1);
          //  cout<<s<<endl;
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
    //int len = input.length();
    //reverseString(input, 0,len-1 );
    reverseWords(input);
    cout<<input;


	return 0;
}

/*

  vaari is preety

*/


