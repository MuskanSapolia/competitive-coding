#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int m;
  cin>>n>>m;
  int a[n][2*m];
  int count=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<2*m;j++)
    {
      cin>>a[i][j];
    }

  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<2*m;j+=2)
    {
      if(a[i][j+1]+a[i][j]>=1)
        count++;
    }
  }
  cout<<count;
  return 0;
}
