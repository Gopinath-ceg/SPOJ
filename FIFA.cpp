#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
main()
{
	long long int x,num;
	int g,t,a,d,i;
	while(1)
	{
		scanf("%d %d %d %d",&g,&t,&a,&d);
		if(g==-1)
			break;
		num=d+(long long int)g*a;
		for(i = 0; (1LL<<i) < num; i++);
		x=(long long int)g*t*(t-1)/2+(1LL<<i)-1;
		printf("%d*%d/%d+%d=%lld+%lld",g,a,t,d,x,(1LL<<i) - num);
	}
	return 0;
}
