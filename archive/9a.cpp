#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b;
if(a>=b)
c=6-a+1;
else
c=6-b+1;
int d=6,i;
for(i=1;i<=c;i++)
{
if(c%i==0&&d%i==0)
{
c=c/i;
d=d/i;
}
}
cout<<c<<"/"<<d;
return 0;
}
