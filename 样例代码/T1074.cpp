#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int ans=0,i,m,n;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>n;
		if(((n%10)-((n/1000)+((n/100)%10)+((n/10)%10)))>0)
	 		ans++;
	}
	cout<<ans;
	
	
	return 0;
} 