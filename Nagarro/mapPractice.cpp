#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string , int> myMap;
    myMap["Apple"] = 5;
    string fruits[10] = {"Banana" , "Litchi" , "Strawberry" , "Cherry" , "Guava" };
    int price[10] = {23,67,45,34,78};
    for(int i=0;i<5;i++)
    {
        myMap[fruits[i]] = price[i];
    }
    for(auto node: myMap)
    {
        cout<<node.first<<" "<<node.second<<endl;
    }

    for(int i=0;i<myMap.bucket_count();i++)
    {
        cout<<i<<" : ";
        for(auto temp = myMap.begin(i); temp!=myMap.end(i);temp++)
        {
            cout<<temp->first<<"("<<temp->second<<") , ";
        }
        cout<<endl;
    }
    return 0;
}
