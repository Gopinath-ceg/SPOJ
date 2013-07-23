#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,m;
	float a1,a2,a3,a4,max;
	while(-1)
	{
		scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
		if(a==-1)
			break;
		a1=float(a)/e;
		a2=float(b)/f;
		a3=float(c)/g;
		a4=float(d)/h;
		max=a1;
		if(max<a2)
			max=a2;
		if(max<a3)
			max=a3;
		if(max<a4)
			max=a4;
		m=int(max);
		if(max-int(max)!=0)
			m++;
		printf("%d ",m*e-a);
		printf("%d ",m*f-b);
		printf("%d ",m*g-c);
		printf("%d ",m*h-d);
		printf("\n");
	}
	return 0;
}

