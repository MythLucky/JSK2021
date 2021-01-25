#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double x,a,b,c,d,h;
	cin>>x>>a>>b>>c>>d;
	h=a*x*x*x+b*x*x+c*x+d;
	printf("%.7lf",h);
	return 0;
} 