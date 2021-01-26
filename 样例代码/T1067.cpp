#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,x,y,t1,t2,i;
	cin>>n>>x>>y;
	for(i=1;i<=n-1;i++)
	{
		cin>>t1>>t2;
		if ((y*1.0/x)-(t2*1.0/t1)>0.05) cout<<"worse";
		else if ((y*1.0/x)-(t2*1.0/t1)<-0.05) cout<<"better";
		else cout<<"same";
		cout<<endl;
	}
	
	
	return 0;
} 