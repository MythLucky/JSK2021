#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i;
	double h=0,t;
	for(i=1;i<=12;i++)
	{
		cin>>t;
		h+=t;
	}
	printf("$%.2lf",h/12);
	return 0;
} 