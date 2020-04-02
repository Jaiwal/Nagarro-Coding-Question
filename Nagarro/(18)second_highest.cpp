/*
Print second-highest number from given array.
Method like : Public int secoundhighest(int inpute1, int[] input2)

*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int secondHighest(vector<int> v, int n)
{
    if(n==1 || n==0)
    {
        return -1;
    }
    int first = INT_MIN , second = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(v[i]>first)
        {
            second = first;
            first = v[i];
        }
        if(v[i] < first && v[i]> second )
        {
            second = v[i];
        }
    }
    if(first == second)
    {
        return -1;
    }
    return second;
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         vector<int> v;
         for(int i=0;i<n;i++)
         {
             int no;
             cin>>no;
             v.push_back(no);
         }
         cout<<secondHighest(v,n)<<endl;

     }
	//code
	return 0;

 }
/*

1
6
45 12 34 67 22 1
45

*/
