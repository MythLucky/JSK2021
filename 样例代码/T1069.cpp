#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int h,i;
	double hei,ans;
	cin>>h;
	hei=h;
	ans=h;
	for(i=1;i<=10-1;i++)
	{
		ans+=hei;
		hei/=2;
	}
	cout<<ans<<endl<<hei/2;
	return 0;
} 