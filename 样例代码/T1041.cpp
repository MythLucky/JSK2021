#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if (50+n/3.0>n/1.2) cout<<"Walk";
	else if (50+n/3.0<n/1.2) cout<<"Bike";
	else cout<<"All";
	return 0;
} 