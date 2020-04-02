
#include <bits/stdc++.h>
using namespace std;

#define NO_OF_CHAR 256


bool areAnagram(string str1,string str2)
{
   int i;
   int count[NO_OF_CHAR]={0};

   for(i=0;str1[i]&&str2[i];i++)
   {
       count[str1[i]]++;
       count[str2[i]]--;
   }

   if(str1[i]||str2[i])
    return false;

   for(i=0;i<NO_OF_CHAR;i++)
    if(count[i])
    return false;

   return true;
}

int main()
{

    string str1,str2;

    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<endl;
    cout<<"Enter second string: ";
    getline(cin,str2);

  if(areAnagram(str1,str2))
    cout<<"Yes";
  else
    cout<<"Nope";


   return 0;
}
