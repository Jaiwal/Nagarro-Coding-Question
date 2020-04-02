#include<iostream>
#include<vector>
using namespace std;
/*

Given two array A[] and B[] which were having almost same elements. Only two elements in array b[] are different from array A[]. In minimum space and time complexity you have to print these two elements of array B[] which are not present in array A[].

*/
void findUniqueElement(vector<int> v1, int n1, vector<int> v2, int n2)
{
    int xorv = 0;
    for(int i=0;i<n1;i++)
    {
        xorv ^= v1[i];
    }
   // cout<<xor<<endl;
     for(int i=0;i<n2;i++)
    {
        xorv ^= v2[i];
    }
    int temp = xorv, i=0;
    while(temp>0)
    {
        if(temp &1)
        {
            break;
        }
        i++;
        temp >>= 1;
    }
    int mask = 1<<i , first =0, second =0;
    for(int i=0;i<n1;i++)
    {
        if((mask & v1[i])!=0)
        {
            first ^= v1[i];
        }
    }
      for(int i=0;i<n2;i++)
    {
        if((mask & v2[i])!=0)
        {
            first ^= v2[i];
        }
    }
    second = first^xorv;
    cout<<first<<" "<<second<<endl;
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
1 2 3 4 5
7
1 4 5 2 3 7 8

*/



