#include<iostream>
using namespace std;

int main()
{
    int i,j, a[100][3];
    for(i=0;i<100;i++)
    {
          for(j=0;j<3;j++)
              cin>>a[i][j];
          if(a[i][0]+a[i][1]+a[i][2]==0) break;
    }
    for(j=0;j<i;j++)
    {
          if( (a[j][1]-a[j][0]) == (a[j][2]-a[j][1]) ) cout<<"AP "<<2*a[j][2]-a[j][1]<<endl;
          else cout<<"GP "<<a[j][2]*a[j][2]/a[j][1]<<endl;
    }
     return 0;
}
