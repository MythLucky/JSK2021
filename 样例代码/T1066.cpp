#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long a,b,c,k,i;
	cin>>k;
	a=1;
	b=1;
	for(i=3;i<=k;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	if (k>=3) cout<<c;
	else cout<<1;
	
	
	return 0;
} 