#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long m,i;
	double n=1;
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
		n*=1.001;
	}
	printf("%.4lf",n);
	return 0;
} 