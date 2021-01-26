#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,n,h=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if (!((i%7==0)||(i%10==7)||((i>=10)&&(i/10==7))))
		{
			h+=i*i;
		}
	}
	cout<<h;
	return 0;
} 