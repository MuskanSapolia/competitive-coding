#include<bits/stdc++.h>
using namespace std;
int bsearch(pair<int,int>[],int,int,int);
int main()
{
  int n,m;
  cin>>n;
  int a[n+1];
  int   i=1;
  while(i<=n)
  {
    cin>>a[i];
    i++;
  }
  cin>>m;
  int q;
  pair<int,int>p[n+1];
  int d=0;
  for(i=1;i<=n;i++)
  {
    p[i]={d+1,d+a[i]};
    d=p[i].second;
    // cout<<p[i].first<<" "<<p[i].second<<endl; 
  }        
  while(m--)
  {
    cin>>q;
    int k= bsearch(p,1,n,q);
    cout<<k<<endl;
  }
  return 0;
}
int bsearch(pair<int,int>p[],int l,int h,int q)
{
  int mid = -1;
  while(l<=h)
  {
    if(mid==(l+h)/2) break;
     mid=(h+l)/2;
    if(q>=p[mid].first&&q<=p[mid].second)
       break;
    else if(q<p[mid].first)
      return bsearch(p,l,mid-1,q);
    else
     return  bsearch(p,mid+1,h,q);
  }
  return mid;
}

