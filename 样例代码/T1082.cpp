#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long h=1,i,n,ans=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		h*=i;
		ans+=h;
	}
	cout<<ans;
	
	
	return 0;
} 