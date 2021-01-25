#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,x,y,h;
	cin>>n>>x>>y;
	h=y/x;
	if (y%x!=0) h++;
	if (h>=n) cout<<0;
	else cout<<n-h;
	return 0;
} 