#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,n,m,h=0,t;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>t;
		if (t==m) h++;
	}
	cout<<h;
	return 0;
} 