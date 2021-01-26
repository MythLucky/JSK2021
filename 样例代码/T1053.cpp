#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,n,h=0,t;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t;
		h+=t;
	}
	printf("%d %.5lf",h,h*1.0/n);
	return 0;
} 