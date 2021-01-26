#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,i,t1,t2,t3,a=0,b=0,c=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t1>>t2>>t3;
		a+=t1;
		b+=t2;
		c+=t3;
	}
	cout<<a<<' '<<b<<' '<<c<<' '<<a+b+c;
	return 0;
} 