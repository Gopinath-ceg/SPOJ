#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long int count;
void merge(long long int arr[],long int l,long int m,long int h)
{
	long int i=l,j=m+1,k,temp[100000],index=l;
	while((i<=m) && (j<=h))
	{
		if(arr[i] <= arr[j])
		{
			temp[index]=arr[i];
			i++;
		}
		else
		{
			temp[index]=arr[j];
			j++;
			count++;
		}
		index++;
	}

	if(i>m)
	{
		while(j<=h)
		{
			temp[index]=arr[j];
			j++;
			index++;
			count++;
		}
	}
	else
	{
		while(i<=m)
		{
			temp[index]=arr[i];
			i++;
			index++;
		}
	}

	for(k=l;k<index;k++)
		arr[k]=temp[k];
}

void merge_sort(long long int arr[],long int low,long int high)
{
	long int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main()
{
	int t;
	long int n,i;
	long long int arr[200010];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&n);
		for(i=0;i<n;i++)
			scanf("%llu",&arr[i]);
		count=0;
		merge_sort(arr,0,n-1);
		cout<<count<<endl;
	}
	return 0;
}
