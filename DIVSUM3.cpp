#include<stdio.h>
#include<math.h>
int main()
{
    long int t,n,sum;
    int i;
    scanf("%ld",&t);
    while(t--)
    {
              scanf("%ld",&n);
              if(n==1 || n==0)
                      printf("0\n");
              else
              {
                  sum=1;
                  for(i=2;i<sqrt(n);i++)
                                         if(n%i==0)
                                                   sum=sum+i+n/i;
                  if(i==sqrt(n) && n%i==0)
                  sum+=i;
                  printf("%ld\n",sum);
              }
    }
    return 0;
}
