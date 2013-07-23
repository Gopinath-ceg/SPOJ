#include<stdio.h>
#include<math.h>
long long int a[1000001];
int main()
{
    long long int t,n,sum,i;
    a[1]=0;
    for(n=2;n<1000001;n++)
    {
    	sum=1;
        for(i=2;i<sqrt(n);i++)
                  if(n%i==0)
                          sum+=i+n/i;
        if(i==sqrt(n) && n%i==0)
	          sum+=i;
	a[n]=sum+a[n-1];
    }
    scanf("%lld",&t);
    while(t--)
    {
              scanf("%lld",&n);
              if(n==1 || n==0)
                      printf("0\n");
              else
                  printf("%lld\n",a[n]);
    }
    return 0;
}
