#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,p=0,d=0;
cin>>n;
int s=n;
int i;
while(n--)
{
cin>>i;
p=p+i;

}
for(i=1;i<=5;i++)
{
if((p+i)%(s+1)!=1)
d++;
}
cout<<d;
return 0;
}
