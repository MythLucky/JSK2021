#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long n,m,i,h=1;
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
		h*=n;
	}
	cout<<h;
	return 0;
} 