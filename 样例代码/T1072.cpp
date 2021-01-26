#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,m,i,t,ans=0;
	cin>>n;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>t;
		if (t<=n)
		{
			n-=t;
		}
		else ans++;
	}
	cout<<ans;
	
	
	return 0;
} 