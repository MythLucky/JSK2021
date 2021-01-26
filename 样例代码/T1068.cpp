#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int i,n;
	double t1,t2,t3;
	double h=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t1>>t2>>t3;
		h+=sqrt(t1*t1+t2*t2)/25;
		h+=t3*1.5;
	}
	cout<<ceil(h);
	
	return 0;
} 