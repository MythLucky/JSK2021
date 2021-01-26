#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,y,b,i,j;
	char c;
	cin>>x>>y>>c>>b;
	if (b==0)
	{
		for(j=1;j<=y;j++)
			cout<<c;
		cout<<endl;
		for(i=2;i<=x-1;i++)
		{
			cout<<c;
			for(j=2;j<=y-1;j++)
			{
				cout<<' ';	
			}
			cout<<c;
			cout<<endl;
		}
		for(j=1;j<=y;j++)
			cout<<c;
		cout<<endl;	
	}
	else 
	{
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{
				cout<<c;	
			}
			cout<<endl;
		}
	}
	
	
	return 0;
} 