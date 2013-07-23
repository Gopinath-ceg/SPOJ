#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,C[3],B[3],D[3],i,j,flag;
    for(a=6;a<=100;a++)
    {
     i=0;
     for(b=2;b<=a;b++)
     for(c=2;c<=a;c++)
     for(d=2;d<=a;d++)
     if(pow(a,3)==pow(b,3)+pow(c,3)+pow(d,3))
                                 if(i==0)
                                 {
                                 printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
                                 B[i]=b,C[i]=c,D[i]=d;
                                 i++;
                                 }
                                 else
                                 {
                                     flag=0;
                                     for(j=0;j<i;j++)
                                     if(((B[j]==b)&&(C[j]==c)&&(D[j]==d))||((B[j]==b)&&(C[j]==d)&&(D[j]==c))||((B[j]==d)&&(C[j]==c)&&(D[j]==b))||((B[j]==d)&&(C[j]==b)&&(D[j]==c))||((B[j]==c)&&(C[j]==d)&&(D[j]==b))||((B[j]==c)&&(C[j]==b)&&(D[j]==d)))
                                     flag=1;
                                     if(flag==0)
                                     {
                                     printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
                                     B[i]=b,C[i]=c,D[i]=d;
                                     i++;
                                     }
                                 }
     }
     return 0;
}
