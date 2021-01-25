#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if (!(n%3) && !(n%5)) cout<<"YES";
	else cout<<"NO";
	
	return 0;
} 