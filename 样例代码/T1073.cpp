#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int h=0,n,i,t1,t2,ans=-1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t1>>t2;
		if ((t1<=140)&&(t1>=90)&&(t2>=60)&&(t2<=90))
		{
			h++;
		}
		else
		{
			if (h>ans) ans=h;
			h=0;
		}
	}
	if (h>ans) ans=h;
	cout<<ans;
	
	return 0;
} 