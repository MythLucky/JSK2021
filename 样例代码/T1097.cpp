#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int ans=0,n,i,a[2000],t;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		cin>>t;
		ans+=t*a[i];
	}
	cout<<ans;
	
	
	return 0;
} 