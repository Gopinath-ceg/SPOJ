#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0;
    while(1)
    {
            scanf("%d",&a);
            if(a==42)
                     break;
            else
                printf("\n%d",a);
    }
    getch();
    return 0;
}
