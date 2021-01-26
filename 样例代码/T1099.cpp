#include<iostream>
#include<cstring>
using namespace std;
int num[1000];
int main()
{
	char c1[1000],c2[1000],ct;
	int c1len,c2len,i,t;
	cin>>c1>>c2;
	c1len=strlen(c1);
	c2len=strlen(c2);
	for(i=0;i<=(c1len/2-1);i++)
	{
		ct=c1[i];
		c1[i]=c1[c1len-i-1];
		c1[c1len-i-1]=ct;
	}//·´ÖÃ
	for(i=0;i<=(c2len/2-1);i++)
	{
		ct=c2[i];
		c2[i]=c2[c2len-i-1];
		c2[c2len-i-1]=ct;
	}//·´ÖÃ
//	cout<<c1<<endl<<c2; 

	for(i=0;i<c1len;i++)
	{
		if (i<c2len)
			num[i]+=(int(c1[i])-48)-(int(c2[i])-48);
		else
			num[i]+=(int(c1[i])-48);
		if (num[i]<0)
		{
			num[i]+=10;
			num[i+1]--;	
		}
	}
	while (num[c1len-1]==0)
	{
		c1len--;
	}
	for(i=0;i<=(c1len/2-1);i++)
	{
		t=num[i];
		num[i]=num[c1len-i-1];
		num[c1len-i-1]=t;
	}//·´ÖÃ
	for(i=0;i<c1len;i++)
	{
		cout<<num[i];
	}
	return 0;
} 
