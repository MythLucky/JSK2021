#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char c;
	int n,ans=0,h;
	cin>>n>>c;
	if (c=='y') ans+=5;
	ans+=8;
	if (n>1000)
	{
		h=(n-1000)/500;
		if ((n-1000)%500!=0) h++;
		ans+=4*h;
	}
	cout<<ans;
	return 0;
} 