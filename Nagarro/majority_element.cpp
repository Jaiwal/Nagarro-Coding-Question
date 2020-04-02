/*

Write a function which takes an array and prints the majority element (if it exists), otherwise prints “No Majority Element”. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
Examples :

Input : {3, 3, 4, 2, 4, 4, 2, 4, 4}
Output : 4

Input : {3, 3, 4, 2, 4, 4, 2, 4}
Output : No Majority Element

*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
/*int majorityElement(vector<int> v, unordered_map<int,int> map1,int n)
{
   for(int i=0;i<n;i++)
   {
       map1[v[i]] ++;
   }
   for(auto node: map1)
   {
       if(node.second> (n/2))
       {
           return node.first;
       }
   }
   return -1;

}
*/
void majorityElement(vector<int> v , int n)
{

    unordered_map<int, int > m;
    for(int i=0;i<n;i++)
    {
        m[v[i]]++;
    }
    for(auto node: m)
    {
        if(node.second > (n/2))
        {
            cout<<node.first<<endl;
            return;
        }
    }
    cout<<" No majority Element "<<endl;
    return;
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
        // unordered_map<int,int> map1;
         for(int i=0;i<n;i++)
         {
             int no;
             cin>>no;
             v.push_back(no);
            // map1[no] = 0;
         }
         majorityElement(v,n);
         //cout<<majorityElement(v,map1,n)<<endl;

     }
	//code
	return 0;
}

