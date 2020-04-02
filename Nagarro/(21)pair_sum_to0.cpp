#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<pair<int,int>> findSubArray(int arr[],int n)
{
    unordered_map<int,vector<int>> map;

    vector<pair<int,int>>out;

    int sum=0;


    for(int i=0;i<n;i++)
    {
        // add current element to sum
        sum+=arr[i];

        // if sum is 0, we found a subarray starting
        // from index 0 and ending at index i
        if(sum==0)
            out.push_back(make_pair(0,i));

             // If sum already exists in the map there exists
        // at-least one subarray ending at index i with
        // 0 sum

        if(map.find(sum)!=map.end())
        {
            vector<int>vc=map[sum];
            for(auto it=vc.begin();it!=vc.end();it++)
                out.push_back(make_pair(*it+1,i));
        }

        map[sum].push_back(i);



    }

    return out;

}




void print(vector<pair<int,int>> out)
{
    for(auto itr=out.begin();itr!=out.end();itr++)
    {
        cout<<"Subarray from index "<<itr->first<<"to"<<itr->second<<endl;
    }
}
int main()
{
    int n;
    cin>>n;

    int *arr=new int[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<pair<int,int>> out=findSubArray(arr,n);


    if(out.size()==0)
        cout<<"no subarray exist";
    else
        print(out);

    return 0;
}
