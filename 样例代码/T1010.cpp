#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double x1,y1,x2,y2,h;;
	cin>>x1>>y1>>x2>>y2;
	h=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("%.3lf",h);
	return 0;
} 