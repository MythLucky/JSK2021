#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,n,t,a=0,b=0,c=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t;
		if (t==1) a++;
		else if (t==5) b++;
		else if (t==10) c++;
	}
	cout<<a<<endl<<b<<endl<<c;
	return 0;
} 