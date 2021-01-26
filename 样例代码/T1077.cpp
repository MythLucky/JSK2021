#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if (n<0)
	{
		cout<<'-';
		n=-n;
	}
	if (n==0) cout<<0;
	else
	{
		while (n%10==0) n/=10;
		while (n>0)
		{
			cout<<n%10;
			n=n/10;
		}
	}
	
	
	return 0;
} 