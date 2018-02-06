#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  long long a[n];
  long max=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    while(a[i]%2==0)
      a[i]/=2;
    while(a[i]%3==0)
      a[i]/=3;
  }
  long long p=a[0];
  int flag=1;
  for(int i=1;i<n;i++)
  {
    if(a[i]!=p)
    {
      flag=0;
      break;
    }
  }
  if(flag==0)
    cout<<"No";
  else
    cout<<"Yes";
  
 
  return 0;
}
