#include<iostream>
 
#include<stdio.h>
 
using namespace std;
 
int max(int a[],int n)
{
    int maxm = a[1];
        for(int i=2; i<=n; i++)
        {
                if(a[i]>maxm)
                        maxm=a[i];
        }
        return maxm;
}
 
int main()
{
        int t;
        scanf("%d",&t);
        while(t--)
        {
                int n;
                scanf("%d",&n);
                int arr[n],flag=0;
                int count[101]={0};
                for(int i=1; i<=n; i++)
                {
                        scanf("%d",&arr[i]);
                        (count[arr[i]])++;
                }
                int maxm = max(arr,n);
                //cout<<maxm;
                int temp = count[1] , tempi = 1;
                for(int i=2; i<=maxm; i++)
                {
                        if(temp<count[i])
                        {
                                temp = count[i];
                                tempi = i;
                        }
                }
                if(count[tempi]>=tempi && count[tempi]%tempi==0)
                {
                        flag=1;
                        printf("%d\n",tempi);
                }
                
                if(flag!=1)
                        printf("-1\n");
        }
}

