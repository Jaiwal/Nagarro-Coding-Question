#include<bits/stdc++.h>
using namespace std;
string leftshift(string s,int d)
{
	reverse(s.begin(),s.begin()+d);
	reverse(s.begin()+d,s.end());
	reverse(s.begin(),s.end());
	return s;
}
string rightshift(string s,int d)
{
	return leftshift(s,s.length()-d);
}
int cut(string os,int m,int n)
{
	if(m==0)
	return 0;
	string ss=os;
	int cnt=0;
	do
	{
		if(cnt%2==0)
		{
		os=rightshift(os,m);	
		}
		else
		{
			os=rightshift(os,n);
		}
		cnt++;
		}while(os!=ss);
return cnt;
}
int main()
{
	string os;
	cin>>os;
	
	int m,n;
	cin>>m>>n;
	cout<<cut(os,m,n)<<endl;
}
