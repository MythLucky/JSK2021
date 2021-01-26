#include<iostream>
#include<cstdio>
using namespace std;
int n,len,a[1000],i,j;
int main()
{
	cin>>n;
	a[1]=1;
	len=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=len;j++)
		{
			a[j]*=2;
		}
		for(j=1;j<=len;j++)
		{
			a[j+1]+=a[j]/10;
			a[j]%=10;
		}
		if (a[len+1]!=0) len++;
	}
	for(i=len;i>=1;i--)
	{
		cout<<a[i];
	}
	
	return 0;
}