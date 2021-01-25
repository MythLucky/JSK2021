#include<iostream>
using namespace std;
int main()
{
	double a,b,h;
	int i=0;
	cin>>a>>b;
	while (a>b*i) i++;
	i--;
	printf("%.6lf",a-b*i);
	return 0;
}