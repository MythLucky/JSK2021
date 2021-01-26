#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,k,nx,i;
	double h;
	cin>>n>>k;
	h=200;
	i=1;
	nx=n;
	while (i<=20&&nx<h)
	{
		h*=(1+0.01*k);
		nx+=n;
		i++;
	}
	if (i>20) cout<<"Impossible";
	else cout<<i;
	return 0;
} 