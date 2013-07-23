#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
long long unsigned int a[10000001]={0},n;
int main()
{
	int t;
	int prime[4000],num,i,j,size;
	bool p;
	num=0;
	prime[num++]=2;
	for(i=3;i<=3200;i+=2)
	{
		p = true;
		size=(int)sqrt(i)+1;
		for(j=0;j<num;j++)
		{
			if(size<=prime[j])
				break;
			if(i % prime[j] == 0 )
			{
				p = false;
				break;
			}
		} 
		if(p == true)
		prime[num++] = i;
	}
	for(i=2;i<=10000000;i++)
	{
		for(j=0;j<num;j++)
			if(i%prime[j]==0)
			{
				a[i]=prime[j];
				break;
			}
		a[i]+=a[i-1];
	}
	for(i=9990000;i<9990100;i++)
		cout<<a[i]<<endl;
    	scanf("%d", &t);
    	while (t--)
        {
        	cin>>n;
        	cout<<a[n]<<endl;
        }
    return 0;
    }

