#include<iostream>
#include<cstdio>
#define pi 3.14159
using namespace std;
int main()
{
	double h,r,n;
	int i;
	cin>>h>>r;
	n=pi*r*r*h;
	i=0;
	while(i*n<20000) i++;
	cout<<i;
	return 0;
} 