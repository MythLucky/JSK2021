#include<iostream>
using namespace std;
int main()
{
	int i,n,x,t;
	bool b[10001];
	cin>>n;
	cin>>x;
	
	for(i=1;i<=n;i++)
	{
		b[i]=true;
	}
	t=1;
	while (t<=x)
	{
		for(i=t;i<=n;i+=t)
		{
			b[i]=!b[i];
		}
		t++;
	}
	i=1;
	cout<<1;
	for(i=2;i<=n;i++)
	{
		if (!b[i]) cout<<','<<i;
	}
	
	return 0;
}