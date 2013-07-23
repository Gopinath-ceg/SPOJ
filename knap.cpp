#include<iostream>
using namespace std;
void knapsack(int W[],int B[],int n)
{
    int w,i,b[10][10],k;
    for(w=0;w<=5;w++)
    {
        b[0][w]=0;
        b[w][0]=0;
    }
    for(i=1;i<=n;i++)
    {
        for(w=0;w<=5;w++)
        {
            if(W[i]<=w)
            {
                if(B[i]+b[i-1][W[i]-w]>(b[i-1][w]))
                    b[i][w]=B[i]+b[i-1][w-W[i]];
                else
                    b[i][w]=b[i-1][w];
            }
            else
                b[i][w]=b[i-1][w];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(w=0;w<=5;w++)
            cout<<"\t"<<b[i][w];
        cout<<"\n";
    }
}
main()
{
	int t,*v,*w,e,f,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>e>>f;
		f=f-e;
		cin>>n;
		v=new int[n];
		w=new int[n];
		for(i=0;i<n;i++)
			cin>>v[i]>>w[i];
		int b[
		
		
		
		
		
		
		
		
}
