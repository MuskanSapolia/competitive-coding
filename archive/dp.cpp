#include<bits/stdc++.h>
using namespace std;
int a[101][101], dp[101][101];
void table(int h,int w)
{
  for(int i=0;i<h;i++)
    for(int j=0;j<w;j++)
      dp[i][j]=0;
}
void solve(int h,int w)
{
  int i=0,j=0;
  for(int i=0;i<h;i++)
  {
    for(int j=0;j<w;j++)
    {
      if(i==0)
        dp[i][j]=a[i][j];
      else
      {
        if(j==0)
          dp[i][j]=a[i][j]+ max(dp[i-1][j],(j+1)<w?dp[i-1][j+1]:0);
        else if(j==w-1)
          dp[i][j]=a[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
        else
          dp[i][j]=a[i][j]+max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]));
      }
    }
  }
}
int main()
{
  int t;
  int h, w;
  cin>>t;
  while(t--)
  {
    cin>>h>>w;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
        cin>>a[i][j];
    table(h,w);
    solve(h,w);
    int max=dp[h-1][0];
    for(int j=1;j<w;j++)
      if(dp[h-1][j]>max)
        max=dp[h-1][j];
    cout<<max<<endl;
  }
  return 0;
}
