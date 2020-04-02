#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void findUniqueElement(vector<int> v1, int n1, vector<int> v2, int n2)
{
    unordered_map<int,int> m;
    for(int i=0;i<n1;i++)
    {
      //  m.insert(make_pair(v1[i],v1[i]));
        m[v1[i]] = v1[i];
    }
    for(int i=0;i<n2;i++)
    {
        if(!m.count(v2[i]))
        {
            cout<<v2[i]<<" ";
        }
    }
}
int main()
{
    int n1,n2;
  vector<int> v1;
  vector<int> v2;
  cin>>n1;
  for(int i=0;i<n1;i++)
  {
      int no;
      cin>>no;
      v1.push_back(no);
  }
  cin>>n2;
  for(int i=0;i<n2;i++)
  {
      int no;
      cin>>no;
      v2.push_back(no);
  }
    findUniqueElement(v1,n1,v2,n2);

    return 0;
}

/*

5
1 4 3 2 5
7
1 4 5 2 3 7 8

*/
