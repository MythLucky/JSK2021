#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,na,nb,i,a[200],b[200],ansa=0,ansb=0;
	cin>>n>>na>>nb;
	for(i=0;i<=na-1;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=nb-1;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<=n-1;i++)
	{
		if (((a[i%na]==0)&&(b[i%nb]==2))||((a[i%na]==2)&&(b[i%nb]==5))||((a[i%na]==5)&&(b[i%nb]==0)))
			{ansa++;}
		else if (a[i%na]==b[i%nb]);
		else {ansb++;}
	}
	if (ansa>ansb) cout<<'A';
	else if (ansa<ansb) cout<<'B';
	else cout<<"draw";
	return 0;
} 