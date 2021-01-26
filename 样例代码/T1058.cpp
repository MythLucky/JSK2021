#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,m,n,h=0;
	cin>>m>>n;
	for(i=m;i<=n;i++)
	{
		if (i%2) h+=i;
	}
	cout<<h;
	return 0;
} 