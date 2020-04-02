
#include<iostream>
#include<cstring>
using namespace std;
string coding(string input)
{
  string output;
  for(int i=0;input[i];i++)
  {
      if(input[i]>='A'&&input[i]<='Z')
        output+=(char)(input[i]-'A'+'1');

      if(input[i]>='1'&&input[i]<='9')
        output+=(char)((input[i]-'1')+65);
  }
  return output;
}
int main()
{
    string input;
    cin>>input;
    cout<<coding(input);
    return 0;
}
