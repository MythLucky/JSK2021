#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,i,a1=0,a2=0,a3=0,a4=0,t;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t;
		if (t<=18) a1++;
		else if (t<=35) a2++;
		else if (t<=60) a3++;
		else a4++;
	}
	printf("%.2lf",a1*100.0/n);cout<<'%'<<endl;
	printf("%.2lf",a2*100.0/n);cout<<'%'<<endl;
	printf("%.2lf",a3*100.0/n);cout<<'%'<<endl;
	printf("%.2lf",a4*100.0/n);cout<<'%'<<endl;
	return 0;
} 