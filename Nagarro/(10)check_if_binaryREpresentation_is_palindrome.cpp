#include<bits/stdc++.h>
using namespace std;

unsigned int reverse(unsigned int n)
{
    unsigned int rev=0;

    while(n>0)
    {
        rev<<=1;

        if(n&1==1)
            rev^=1;

        n>>=1;
    }

    return rev;
}

bool isPalindrome(unsigned int n)
{
    unsigned int rev=reverse(n);

    return(rev==n);
}
int main()
{
    unsigned int n;
    cin>>n;
    if(isPalindrome(n))
        cout<<"Yes";
    else
        cout<<"NO";
}
