#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,i,h=0,t;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t;
		h+=t;
	}
	printf("%.2lf",(h*1.0)/n);
	return 0;
} 