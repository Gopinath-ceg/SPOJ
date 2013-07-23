#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    long unsigned int a;
    for(i=0;i<n;i++)
    {
                    scanf("%lu",&a);
                    if(a%252==0)
                                   printf("Yes ");
                    else
                                   printf("No ");
                    if(a%525==0)
                                   printf("Yes \n");
                    else
                                   printf("No \n");
}
return 0;
}
