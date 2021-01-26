#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m,n,x,t;
	cin>>m>>n>>x;
	t=m/n;
	if (m%n!=0) t++;
	while (x>=t)
	{
		x-=t;
		t=m/n;
		n+=t;
		t=m/n;
		if (m%n!=0) t++;
	}
	cout<<n;
	
	return 0;
} 