#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while (n!=1)
	{
		if (n%2) 
		{
			cout<<n<<"*3+1=";
			n=n*3+1;
			cout<<n<<endl;
		}
		else
		{
			cout<<n<<"/2=";
			n=n/2;
			cout<<n<<endl;
		}
	}
	cout<<"End";
	
	return 0;
} 