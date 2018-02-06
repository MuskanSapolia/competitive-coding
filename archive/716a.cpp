#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,c;
  cin>>n>>c;
  long long a[n];
  long long i=0;
  while(i<n)
  {
    cin>>a[i];
    i++;
  }
  
  for(i=1;i<n;i++)
  {
    if(a[i]-a[i-1]>c)
      a[i-1]=0;
  }
  int p=0;
  for(i=0;i<n;i++)
  {
    if(a[i]==0)
      p=i+1;

  }

  cout<<n-p;

  return 0;
}
