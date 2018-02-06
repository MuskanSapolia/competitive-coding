#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,c=0;
  cin>>n;
  int a[n];
  int i=0;
  while(i<n)
  {
    cin>>a[i];
    i++;
  }
  sort(a,a+n);
  int d=1;
  for(i=0;i<n-1;i++)
  {
      if(a[i]==a[i+1])
      {
        a[i+1]=a[i+1]+1;
        c++;
        
      }
    
      if(a[i]>a[i+1])
      {
        c= c+a[i]-a[i+1]+1;
        a[i+1]=a[i]+1;
        
      }
  }
  cout<<c;
  return 0;
}
