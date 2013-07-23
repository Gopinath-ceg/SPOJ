#include<stdio.h>
int main()
    {
    long long unsigned int result[1000000]={0};
    long long unsigned int i, j, p, t, n;
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
        scanf("%d", &n);
        printf("%d\n", result[n-1]);
        }
    return 0;
    }

