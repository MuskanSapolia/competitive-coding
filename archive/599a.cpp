#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long s,d=0,i,a[3];
for(i=0;i<3;i++)
{
cin>>a[i];
d=d+a[i];}
sort(a,a+3);
s=2*(a[0]+a[1]);
if(s<d)
cout<<s;
else
cout<<d;

   return 0;
}
