#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double h,t;
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t;
		h+=t;
	}
	printf("%.4lf",h/n);
	return 0;
} 