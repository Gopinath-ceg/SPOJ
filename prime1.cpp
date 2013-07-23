#include<stdio.h>
#include<conio.h>
int main()
{
    int c;
    long int a,b,i,j;
            scanf("%d %d",&a,&b);
            for(i=a;i<=b;i++)
            {
                             c=1;
                             for(j=2;j<=i/2;j++)
                             {
                                               c=1;
                                               if(i%j==0)
                                               {
                                                         c=0;
                                                         break;
                                               }
                             }
                             if(c)
                                                    printf("\n%d",i);
                             printf("\n");
            }
    getch();
    return 0;
}
