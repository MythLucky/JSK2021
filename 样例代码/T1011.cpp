#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,i,t;
	cin>>n;
	for(i=1;i<=3;i++)
	{
		t=n%10;//t=3        2       1
		n=n/10;//123 -> 12  -> 1    0
		cout<<t;
	}
	return 0;
}