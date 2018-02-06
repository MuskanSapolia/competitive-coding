#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cin>>n>>m;
  int a[n],b[m];
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<m;i++)
    cin>>b[i];
  sort(a,a+n);
  sort(b,b+m);
  int t,max1,min1;
  min1=a[0];
  t=2*min1;
  max1=a[n-1];
  t=max(max1,t);
  int min2=b[0];
  if(min2>t)
    cout<<t;
  else
    cout<<-1;
  

  return 0;
}
