#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	long long x,m,i;
	double n=1,h=1;
	cin>>x>>h>>m;
	for(i=1;i<=m;i++)
	{
		h=h*(1+0.01*x);
	}
	x=trunc(h);
	cout<<x;
	return 0;
} 