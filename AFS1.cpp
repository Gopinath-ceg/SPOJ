#include<stdio.h>
int main()
    {
    long long result[1000000]={0};
    long long  i, j, p, n;
    int t;
    for (i=0;i<1000000;i++)
        {
        p=i+1;
        for (j=2*p; j<=1000000; j+=p)
            {
            result[j-1]+=p;
            }
        }
        for(i=1;i<=1000000;i++)
        	result[i]+=result[i-1];
    scanf("%d", &t);
    while (t--)
        {
        scanf("%lld", &n);
        printf("%lld\n", result[n-1]);
        }
    return 0;
    }

