#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,ans,i,t;
	cin>>n;
	cin>>ans;
	for(i=2;i<=n;i++)
	{
		cin>>t;
		if (t>ans) ans=t;
	}
	cout<<ans;
	return 0;
} 