#include<stdio.h>
int main()
{
    int n,t,sum=0;
    scanf("%d",&n);
    while(n--)
    {
              scanf("%d",&t);
              if(t>0)
              sum+=t;
    }
    printf("%d",sum);
    return 0;
}
