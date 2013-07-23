#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	int t;
	double vol,U,V,W,u,v,w,a,b,c,d,X,x,Y,y,Z,z;
	cin>>t;
	while(t--)
	{
		cin>>u>>v>>w>>U>>V>>W;
		X=(w-U+v)*(U+v+w);
		x=(U-v+w)*(v-w+U);
		Y=(u-V+w)*(V+w+u);
		y=(V-w+u)*(w-u+V);
		Z=(v-W+u)*(W+u+v);
		z=(W-u+v)*(u-v+W);
		a=sqrt(x*Y*Z);
		b=sqrt(X*y*Z);
		c=sqrt(z*X*Y);
		d=sqrt(x*y*z);
		vol=sqrt((-a+b+c+d)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d))/(192*u*v*w);
		printf("%.4f\n",vol);
	}
	return 0;
}

