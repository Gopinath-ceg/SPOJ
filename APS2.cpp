#include<stdio.h>
#include<iostream>
#include<math.h>
 
using namespace std;
 
#define MAX 10010
#define SQRT 100
#define LEN 10010
 
static bool a[MAX+1]={0};
static int primes[LEN]={0};
static unsigned long long int ab[10000001]={0};
void fillup()
{
    for(int i=3; i<((int)sqrt(MAX)); i+=2)
    {
        if(!a[i])
            for(int j=(i*i); j<MAX; j+=i)
                a[j]=1;
    }
    primes[1] = 2;
    int k=2;
    for(int i=3; (i<MAX) && k<=LEN; i+=2)
    {
        if(a[i]==0)
        {
            primes[k++]=i;
        }
    }
}
 
int func(int d)
{
    for(int i=1;i<100;i++)
    {
        if((d%(primes[i]))==0)
            return primes[i];
    }
}
 
int main()
{
    fillup();
 
//    printf("%d",primes[1]);
    int tc,n;
    ab[0]=0;
    ab[1]=0;
    for(int i=2;i<=10000000;i++)
    {
        ab[i]=ab[i-1]+func(i);
    }
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        printf("%llu",ab[n]);
        printf("\n");
    }
    return 0;
}
