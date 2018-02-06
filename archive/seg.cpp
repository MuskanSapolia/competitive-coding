#include<bits/stdc++.h>
using namespace std;
const int N = 5*1e5+1;
int a[N],mintree[5*N],maxtree[4*N];
void build(int node,int i,int j)
{
  if(i==j)
  { mintree[node]=a[i];
    maxtree[node]=a[i];
  }
  else
  {
    int mid=(i+j)/2;
    build(2*node,i,mid);
    build(2*node+1,mid+1,j);
    mintree[node]=min(mintree[2*node],mintree[2*node+1]);
    maxtree[node]=max(maxtree[2*node],maxtree[2*node+1]);
  }

}

int query1(int node,int i,int j,int k,int l)
{
  if(i>j||i>l||k>j) return -1E15;
  if(i>=k&&j<=l)
    return maxtree[node];
  else
  {
    int mid=(i+j)/2;
    if(l<=mid) return query1(2*node,i,mid,k,l);
    if(k>mid) return query1(2*node+1,mid+1,j,k,l);
    else
      return max(query1(2*node,i,mid,k,mid),query1(2*node+1,mid+1,j,mid+1,l));
  }
}
int query(int node,int i,int j,int k,int l)
 { 
  if(i>j||i>l||k>j) return -1E15;
  if(i>=k&&j<=l)
    return mintree[node];
  else
  {
    int mid=(i+j)/2;
    if(l<=mid) return query(2*node,i,mid,k,l);
    if(k>mid) return query(2*node+1,mid+1,j,k,l);
    else
      return min(query(2*node,i,mid,k,mid),query(2*node+1,mid+1,j,mid+1,l));
  }
}
int main()
{
  int n,q;
  cin>>n>>q;
  for(int i=0;i<n;i++)
    cin>>a[i];
  build(1,0,n-1);
  int l,r;
  while(q--)
  {cin>>l>>r;
    int k=query(1,0,n-1,l-1,r-1);
    int k2=query1(1,0,n-1,l-1,r-1);
    cout<<k+k2<<endl;
  }
}
