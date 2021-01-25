#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long n,h,i;
	cin>>n;
	h=1;
	for(i=1;i<=n;i++) h*=2;
	cout<<h;
	return 0;
} 