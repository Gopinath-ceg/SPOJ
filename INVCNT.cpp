#include<iostream>
#include<conio.h>
using namespace std;
long long c;
void merge(long long int arr[],long int l,long int m,long int h)
{
	long long int i=l,j=m+1,k,*temp,index=l;
	temp=new long long int[h-l];
	while((i<=m) && (j<=h))
	{
		if(arr[i] < arr[j])
		{
			temp[index]=arr[i];
			i++;
		}
		else
		{
			temp[index]=arr[j];
			j++;
			c++;
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
			c++;
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

void merge_sort(long long int arr[],long long int low,long long int high)
{
	long long int mid;
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
	long long int n,*arr,i;
	cin>>t;
	while(t--)
	{
              cin>>n;
              arr=new long long int[n];
	          for(i=0;i<n;i++)
		      cin>>arr[i];
		      //for(i=0;i<n;i++)
		      //cout<<arr[i];
		      c=0;
	          merge_sort(arr,0,n-1);
	          //for(i=0;i<n;i++)
		      //cout<<arr[i]; 
	          cout<<c<<endl;
	          getch();
 }
 return 0;
}
