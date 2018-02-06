#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+1;
int bsearch(pair<int,int>p[],int l,int h,int x)
{
  int mid;
  if(l<=h)
  {
   mid=(l+h)/2;
  if((p[mid].first<=x&&p[mid].second>=x)||p[mid].first>x) return bsearch(p,l,mid,x);
  else  return bsearch(p,mid+1,h,x);
  }
  return mid;
}
int bsearch1(pair<int,int>p[],int l,int h,int x)
{ 
  int mid1;
  if(l<=h)
  {
   mid1=(l+h)/2;
  if((p[mid1].first<=x&&p[mid1].second>=x)||p[mid1].second<x) return bsearch(p,mid1,h,x);
  else  return bsearch(p,l,mid1-1,x);
  }
  return mid1;
}

int main()
{
  int b,c;
  int k1,k2;
  int n,k,q;
  int a[N];
  
  cin>>n>>k>>q;
  pair<int,int>p[n];
 int x,y;
 for(int i=0;i<n;i++)
 {
   cin>>x;
   cin>>y;
   p[i]={x,y};
}
 sort(p,p+n);
 
 for(int i=1;i<=N;i++)
 {
   k1=bsearch(p,0,n-1,i);
   k2=bsearch1(p,0,n-1,i);
   a[i]=k2-k1;
   cerr<<a[i];
 }
 for(int i=1;i<N;i++)
   a[i]=a[i]+a[i-1];
for(int i=0;i<q;i++)
 {
   cin>>b>>c;
   cout<<a[c]-a[b];

 }
   return 0;
}
