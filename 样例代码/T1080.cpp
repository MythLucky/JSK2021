#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double q,p,ans=0,t;
	int i,n;
	q=2;
	p=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		ans+=q*1.0/p;;
		t=q;
		q=q+p;
		p=t;
	}
	printf("%.4lf",ans);
	
	
	return 0;
} 