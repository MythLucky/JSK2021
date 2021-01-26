#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a[200],i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[n-i+1];
	}
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
} 