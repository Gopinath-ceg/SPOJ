#include<iostream>
using namespace std;
int main()
{
    int a;
    long long unsigned int n,*s,*f,i,j,t,t1;
    cin>>a;
    while(a--)
    {
              cin>>n;
              s= new long long unsigned int[n];
              f= new long long unsigned int[n];
              for(i=0;i<n;i++)
                              cin>>s[i]>>f[i];
              for(i=0;i<n;i++)
		              for(j=i;j<n;j++)
                      if(f[i]>f[j])
			          {
             				t=f[i];
             				t1=s[i];
			     	        f[i]=f[j];
			     	        s[i]=s[j];
				            f[j]=t;
				            s[j]=t1;
                      }
                t=0;
                for(i=0;i<n;i++)
                {
                                t1=1;
                                for(j=i+1;j<n;j++)
                                if(s[j]>=f[i])
                                {
                                t1++;
                                i=j;
                                }
                if(t1>t)
                        t=t1;
                }
                cout<<t<<'\n';
    }
    return 0;
}
