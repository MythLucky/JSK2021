#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long h=1,i,n;
	double ans=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		h*=i;
		ans+=1.0/h;
	}
	printf("%.10lf",ans);
	
	
	return 0;
} 