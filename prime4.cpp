#include<stdio.h>
#include<conio.h>
int main()
{
    int n,c;
    long int a,b,i,j;
    scanf("%d",&n);
    while(n)
    {
            n--;
            scanf("%d %d",&a,&b);
            for(i=a;i<=b;i++)
            {
                             c=1;
                             for(j=2;j<=i/2;j++)
                                               if(i%j==0)
                                               {
                                                         c=0;
                                                         break;
                                               }
                                               
                             if(c && i!=1)
                                  printf("\n%d",i);
            }
    }
    getch();
    return 0;
}
