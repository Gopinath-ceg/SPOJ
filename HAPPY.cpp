#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long long unsigned int a;
	int arr[1000];
	int sum,i,b;
	b=0;
	sum=0;
	cin>>a;
	i=0;
	if(a==1)
		cout<<a<<endl;
	else {
		while(a!=1)// && i!=-1)
		{
			if(a<10 && a!=7)
			{
				cout<<"-1"<<endl;
				break;
			}
			else if(a==7)
			{
				cout<<i+5<<endl;
				break;
			}
			else 
			{ 
				sum=0;
				i++;
				while(a)
				{
					sum+=(a%10)*(a%10);
					a/=10;
				}
				a=sum;
				for(int j=0;j<b;j++)
					if(arr[j]==a)
					{
						a=2;
						break;
					}
				arr[b++]=a;
			}
		}
			if(a==1)
				cout<<i<<endl;
	}
	return 0;
}
