#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int h=0,i,n,t,m;
	cin>>n>>m;
	for(i=n;i<=m;i++)
	{
		t=i;
		while (t>0)
		{
			if (t%10==2) h++;
			t/=10;
		}
	}
	cout<<h;
	
	return 0;
} 