#include <stdio.h>
#include <math.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    	 return gcd(b,a%b);
}
int main()
{
    int n,a,b,g;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        g=gcd(abs(a),abs(b));
        a=a/g;
        b=b/g;
        if(a-b<0)
       	        printf("%d\n",b-a);
        else
       	        printf("%d\n",b-a);
    }
    return 0;
}
