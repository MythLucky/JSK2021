#include<iostream>
#include<cstdio>
using namespace std;
bool b[500010];
int main()
{
	int n,ans,i,t;
	cin>>n;
	ans=0;
	i=2;
	while (ans<n)
	{
		while (b[i])
		{
			i++;
		}
		ans++;
		t=2;
		while(i*t<=500000)
		{
			b[i*t]=true;
			t++;
		}
//		cout<<i<<endl;
		i++;
	}
	cout<<i-1;	
	return 0;
} 