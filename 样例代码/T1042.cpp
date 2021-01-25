#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double n,y;
	cin>>n;
	if (n>=0&&n<5) y=-n+2.5;
	else if (n>=5&&n<10) y=2-1.5*(n-3)*(n-3);
	else if (n>=10&&n<20) y=n/2-1.5;
	printf("%.3lf",y);
	return 0;
} 