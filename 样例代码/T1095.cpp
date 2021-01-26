#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	long long i,n,t1,t2,a[10000];
	cin>>n;
	cin>>t1;
	if (n==1) cout<<"Jolly";
	else
	{
		for(i=2;i<=n;i++)
		{
			cin>>t2;
			a[i-1]=abs(t1-t2);
			t1=t2;
		}
		sort(a+1,a+n);
		i=1;
		while ((i+1<=n-1)&&(a[i+1]-a[i]==1)) i++;
		if (i+1>n-1) cout<<"Jolly";
		else cout<<"Not jolly";
	}
	return 0;
} 