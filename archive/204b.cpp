#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> v[N+1];
int main(void)
{
  int n;
  cin>>n;
  int x;
  for(int i=1;i<=n;i++)
  {
    cin>>x;
    v[x].push_back(i);

  }
  int l=0;
  int count;
  int cnt;
  for(int i=1;i<=N;i++)
  {
    cnt=1;
    if(v[i].size()==1)
      l++;
    if(v[i].size()>1)
    {
      
      count=v[i][1]-v[i][0];
       for(int j=2;j<v[i].size();j++)
        {
          if(v[i][j]-v[i][j-1]!=count)
          {
            cnt=0;
            break;
          }
        }
       if(cnt==1)
         l++;
       
    }
  }
  cout<<l<<endl;
  int flag,k;
  for(int i=1;i<=N;i++)
  {
    flag=1;
    if(v[i].size()==1)
      cout<<i<<" "<<0<<endl;
    else if(v[i].size()>1)
    {
      k=v[i][1]-v[i][0];
      for(int j=2;j<v[i].size();j++)
      {
        if(v[i][j]-v[i][j-1]!=k)
        {
          flag=0;
          break;
        }
      }
      if(flag==1)
        cout<<i<<" "<<k<<endl;
    }
  }
  return 0;
}
