#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	double c;
	cin>>a>>b;
	c=b*100.0/a;
	printf("%.3lf",c);
	cout<<'%';
	return 0;
}