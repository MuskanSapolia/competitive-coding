#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,x,i,j;
cin>>n>>m;
 pair<int,int>a[n];
pair<int,int>temp[1];
i=0;
while(n--)
{
cin>>x;
a[i]={x,i};
i++;
}
i=0;
while(a[i].first!=0)
{
if(a[i].first<=m)
{
a[i].first=0;
i++;
}
else
{a[i].first=a[i].first-m;
temp[1].first=a[i].first;
temp[1].second=a[i].second;
j=i;
while(j<n-1)
{
a[j]=a[j+1];
j++;
}a[j].first=temp[1].first;
a[j].second=temp[1].second;
}
}
cout<<a[i].second+1;
return 0;
}
