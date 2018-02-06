#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,t=0,r;
int s=0,u,f;
cin>>a>>b;
c=a+b;
int o,q=0,n,e=0;

while(c>0)
{
o=c%10;
if(o!=0)
q=q*10+o;
c=c/10;
}

while(q>0)
{
n=q%10;
e=e*10+n;
q=q/10;
}

while(a>0)
{
r=a%10;
if(r!=0)
{
s=s*10+r;
}
a=a/10;
}
while(b>0)
{
u=b%10;
if(u!=0)
t=t*10+u;
b=b/10;
}
int k,p,g=0,m=0;
while(t>0)
{
k=t%10;
g=g*10+k;
t=t/10;
}

while(s>0)
{
p=s%10;
m=m*10+p;
s=s/10;
}

f=g+m;

if(f==e)
cout<<"YES";
else
cout<<"NO";
return 0;
}
