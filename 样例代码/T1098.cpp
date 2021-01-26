#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char c1[1000],c2[1000];
	int len1,len2,i,a[1000],b[1000],ans[1000],topp;
	cin>>c1;
	cin>>c2;
	len1=strlen(c1);
	len2=strlen(c2);
	for(i=0;i<=max(len1,len2)-1;i++)
	{
		if (i<=len1-1)
		{
			a[len1-1-i]=int(c1[i])-48;
		}
		if (i<=len2-1)
		{
			b[len2-1-i]=int(c2[i])-48;
		}
	}
	topp=max(len1,len2)-1;
	for(i=0;i<=topp;i++)
	{
		if (i<=len1-1) ans[i]+=a[i];
		if (i<=len2-1) ans[i]+=b[i];
		ans[i+1]=ans[i]/10;
		ans[i]%=10;
	}
	if (ans[topp+1]!=0) topp++;
	else
	{
		while ((topp>=0)&&(ans[topp]==0)) topp--;
	}
	if (topp<0) cout<<0;
	else
	{
		for(i=topp;i>=0;i--) cout<<ans[i];
	}
	return 0;
}