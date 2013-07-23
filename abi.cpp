#include<string.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   char c[4];
   int ans;
   long int n,x,y,z;
   while(1)
   {
         cin>>c;
         if(strcmp(c,"00e0")==0)
         break;
          z=c[3]-48;
          x=c[0]-48;
          y=c[1]-48;
          n=(x*pow(10,z+1))+(y*pow(10,z));
          ans=log2(n);
         ans=pow(2,ans);
         ans=n-ans;
         cout<<endl<<2*ans+1;
   }
   return 0;
}
