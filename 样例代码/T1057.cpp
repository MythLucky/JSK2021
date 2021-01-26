#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,h,i,t;
	cin>>n;
	h=(n-2)*180;
	for(i=1;i<=n-1;i++)
	{
		cin>>t;
		h-=t;
	}
	cout<<h;
	return 0;
} 