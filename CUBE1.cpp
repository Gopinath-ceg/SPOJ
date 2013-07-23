#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    for(a=6;a<=100;a++)
     for(b=2;b<=a;b++)
     for(c=2;c<=b;c++)
     for(d=2;d<=c;d++)
     if(pow(a,3)==pow(b,3)+pow(c,3)+pow(d,3))
                                 printf("Cube = %d, Triple = (%d,%d,%d)\n",a,d,c,b);
     return 0;
}
