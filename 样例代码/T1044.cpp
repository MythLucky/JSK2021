#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	cout<<max(max(x,y),z);
	return 0;
} 