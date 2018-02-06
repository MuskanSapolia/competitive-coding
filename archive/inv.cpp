#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int l,int h)
{
  long long c=0;
  int m=(h+l)/2,
  
  i = l,
      j = m+1,
      k = 0,
      L[h-l+1];
  

  while(i<=m&&j<=h)
  {
    if(a[i]<=a[j])
    {

      L[k++]=a[i++];
    }
    else
    {
      L[k++]=a[j++];
      c += m-i+1; // changed to +1
    }
  }
  while(i<=m)
  {
    L[k++]=a[i++];
  }
  while(j<=h)
  {
    L[k++]=a[j++];
  }
  for(int i = l; i <= h; i++)
    a[i] = L[i-l];
  return c;
}

int mergesort(int arr[],int l,int h)
{
  
  long long count = 0;
  if(l<h)
  {
    int mid=(h+l)/2;
    count += mergesort(arr,l,mid);
    count += mergesort(arr,mid+1,h);
    count += merge(arr,l,h);
  } 
  return count;
}
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
          cin>>a[i];
      int k= mergesort(a,0,n-1);
  cout<<k<<endl;
}
return 0;
}
