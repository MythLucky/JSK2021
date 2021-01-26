#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int h=0,i,n,t;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		t=i;
		while (t>0)
		{
			if (t%10==1) h++;
			t/=10;
		}
	}
	cout<<h;
	
	return 0;
} 