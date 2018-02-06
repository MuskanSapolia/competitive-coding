#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int t,f;
int s,max=-999999999;
while(n--)
{
cin>>f>>t;
if(t>m)
{
s=f-(t-m);
}
else
s=f;

if(s>max)
max=s;
}
cout<<max;
return 0;
}
