#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,n;
	double ans=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if (i%2==1) ans+=1.0/i;
		else ans-=1.0/i;
	}
	printf("%.4lf",ans);
	
	return 0;
} 