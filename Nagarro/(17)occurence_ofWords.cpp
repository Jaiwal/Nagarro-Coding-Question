#include<bits/stdc++.h>
using namespace std;
#include<unordered_map>
void occurrence_of_words(string input)
{
    string subString;
    unordered_map<string,int>myMap;
    int i;
    for(i=0;input[i];i++)
    {
        if(input[i]!=' ')
           subString+=input[i];


        if(input[i]==' ')
            {
            myMap[subString]++;
            subString= "";
             }

    }

    if(input[i]=='\0')
    {
        myMap[subString]++;
        subString="";
          }

          int max=0;
          string maxword="";
          for(auto itr:myMap)
          {
              //cout<<itr.first<<"="<<itr.second<<",";
              if(itr.second>max){
                max=itr.second;
                maxword=itr.first;
              }

          }
          cout<<maxword<<"-"<<max;

}
int main()
{
    string input;
    getline(cin,input);
    occurrence_of_words(input);
    return 0;
}
