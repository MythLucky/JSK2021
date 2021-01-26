#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,h=0;
	while(cin>>n)
	{
		if (n<=10)
		{
			h=n*6;
		}
		else if (n<=20)
		{
			h=60+(n-10)*2;
		}
		else if (n<=40)
		{
			h=80+(n-20);
		}
		else h=100;
		cout<<h<<endl;
	}
	
	
	return 0;
} 