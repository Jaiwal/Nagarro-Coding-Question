#include<iostream>
#include<cstring>
using namespace std;
/*

Question 1- String are given need to convert it into JavaVaribale and vice-versa





Example- if given string are:  this_is_variable

Output- thisIsVariable (need to replace _ with empty and next character to _  need to be Capital letter)

Example – if given string are:  thisIsVariable.

Output:  this_is_variable (if java variable are given before capital character need to add _ (underscore) and capital character will be small).

*/
bool checkJavaVariable(string input)
{

    for(int i=0;input[i]!='\0';i++)
    {
        if(input[i]== '_')
        {

            return false;
        }
    }
    return true;
}
string convertFromJavaVariable(string input)
{
     int prev = 0, curr = 1;
    string output;
    while(input[prev]!= '\0')
    {
        if(input[curr] >= 'A' && input[curr] <= 'Z' && input[curr]!= '\0')
        {
            output += input[prev];
            output += '_';
            output += tolower(input[curr]);
            prev ++;
            curr ++;
        }
        else
        {
            output += input[prev];


        }
        prev ++;
        curr ++;

    }
    return output;

}
string convertToJavaVariable(string input)
{
    int prev = -1, curr = 0;
    string output;
    while(input[curr]!='\0')
    {
        if(input[prev]== '_')
        {
            output += toupper(input[curr]);
            prev++;
            curr++;
        }
        if(input[curr]!= '_')
        {
            output += input[curr];
        }
        prev++;
        curr++;
    }
    return output;
}
int main()
{
    string input;
    cin>>input;
    if(checkJavaVariable(input))
    {
        cout<<convertFromJavaVariable(input)<<endl;
    }
    else
    {

        cout<<convertToJavaVariable(input)<<endl;
    }
    return 0;
}
