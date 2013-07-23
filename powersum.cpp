#include<iostream>
using namespace std;
long long unsigned int pow(int a , int b)
{
     if(b==0)
             return 1;
     int c=a;
     for(int i=1;i<b;i++)
             c=c*a;
     return c;
}
int main()
{
    long long unsigned int sum;
    int n,a,b;
    cin>>n;
    while(n--)
    {
              cin>>a;
              b=pow(2,a-1);
              sum=0;
              int *arr=new int[a];
              for(int i=0;i<a;i++)
                      cin>>arr[i];
              for(int i=0;i<a;i++)
                      sum=sum+arr[i];
                      sum=(sum*b)%(pow(10,9)+7);
              cout<<sum<<'\n';
              delete arr;
    }
    return 0;
}
