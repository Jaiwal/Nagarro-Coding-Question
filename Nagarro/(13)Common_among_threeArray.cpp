#include<bits/stdc++.h>
using namespace std;
void commonElement(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3)
{
    int i=0,j=0,k=0;

    while(i<n1&&j<n2&&k<n3)
    {
        if(arr1[i]==arr2[j]&&arr2[j]==arr3[k])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j])
            i++;

       else if(arr2[j]<arr3[k])
           j++;
       else
        k++;


    }
}
int main()
{
    int arr1[]={1,3,5,7,9};
    int arr2[]={1,2,4};
    int arr3[]={1,5,6,7};

    commonElement(arr1,arr2,arr3,5,3,4);
}

