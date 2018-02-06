#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int t,s,u=0;
t=n/m;
s=n+t;
while(s>0)
{
u=u+s/m;
s=s/m;
}
cout<<n+u;



return 0;
}
