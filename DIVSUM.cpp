#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,sum,i;
    scanf("%lld",&t);
    while(t--)
    {
              scanf("%lld",&n);
              if(n==1 || n==0)
                      printf("0\n");
              else
              {
                  sum=1;
                  for(i=2;i<sqrt(n);i++)
                                         if(n%i==0)
                                                   sum+=i+n/i;
                  if(i==sqrt(n) && n%i==0)
                  sum+=i;
                  printf("%lld\n",sum);
              }
    }
    return 0;
}
