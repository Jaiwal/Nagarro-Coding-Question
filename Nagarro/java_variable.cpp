#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
/*

Question 1- String are given need to convert it into JavaVaribale and vice-versa





Example- if given string are:  this_is_variable

Output- thisIsVariable (need to replace _ with empty and next character to _  need to be Capital letter)

Example – if given string are:  thisIsVariable.

Output:  this_is_variable (if java variable are given before capital character need to add _ (underscore) and capital character will be small).

*/
bool CheckJavaString(string input)
{
    int i=0 , countUpperCase=0;
    while(input[i]!='\0')
    {
        if(input[i]=='_' || input[i]=='$')
        {
            return false; /// not a java string
        }
        if(input[i] >= 'A' && input[i]<= 'Z')
        {
            countUpperCase++;
        }
        i++;
    }
    if(countUpperCase>0)
    {
        return true;
    }
    return false;

}
void convertToNormalString(string input)
{
    int i=0 ;
    string output;
    //output.push_back(input[i++]) ;
    while(input[i]!='\0')
    {
        if(input[i]!='\0' && input[i]>='A' && input[i]<='Z')
        {
            output.push_back('_');
            output.push_back(tolower(input[i]));

        }
        else
        {
            output.push_back(input[i]);
        }
        i++;

    }
    cout<<output<<endl;

}
void convertToJavaString(string input)
{
    int i=0;
    string output;
    while(input[i]!='\0')
    {
        if(input[i]=='_' || input[i]== '$')
        {
            output.push_back(toupper(input[i+1]));
            i++;
        }
        else
        {

            output.push_back(input[i]);
        }

        i++;
    }
    cout<<output<<endl;


}
int main()
{
    string input;
    cin>>input;
    if(CheckJavaString(input))
    {
        convertToNormalString(input);
    }
    else
    {
        convertToJavaString(input);
    }
    return 0;
}
