#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long n,m,k,i,h=0;
	cin>>m>>k;
	if (m%19==0)
	{
		while (m>0)
		{
			if (m%10==3) h++;
			m=m/10;
		}
		if (h==k) cout<<"YES";
		else cout<<"NO";
	}
	else cout<<"NO";
	
	
	
	return 0;
} 