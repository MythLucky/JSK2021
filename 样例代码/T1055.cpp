#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,maxans,minans,i,t;
	cin>>n;
	cin>>maxans;
	minans=maxans;
	for(i=2;i<=n;i++)
	{
		cin>>t;
		if (t>maxans) maxans=t;
		if (t<minans) minans=t;
	}
	cout<<maxans-minans;
	return 0;
} 