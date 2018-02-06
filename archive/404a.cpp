#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char m[n+1][n+1];
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
      cin>>m[i][j];
  }
  int flag1=0,flag2=0;
  char d = m[1][1];
  char s = m[1][2];
  for(int i =1;i<=n;i++)
  {
    for(int j =1;j<=n;j++)
    {
      if(i==j || i+j==n+1)
      {
        if(m[i][j]!=d)
          flag1=1;
      }
      else
      {
        if(m[i][j]!=s || m[i][j]==d)
          flag2=1;
      }
    }
  }
  if(flag1==1 || flag2 == 1)
    cout<<"NO";
  else
    cout<<"YES";
  return 0;
}
