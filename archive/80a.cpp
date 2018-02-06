#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  int flag=1;
  cin>>n>>m;
  int i,j;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag=0;
      break;
    }
  }
    if(flag==0)
    cout<<"NO";
  else
    {
      for(i=2;i<=m/2;i++)
      {
        if(m%i==0)
        {
          flag=0;
          break;
        }
      }
      if(flag==0)
        cout << "NO";
       else
      {
      int c=0;
      for(i=n+1;i<m;i++)
      {
        for(j=2;j<=i/2;j++)
        {
          if(i%j==0)
          {
            flag=0;
          c++;
            break;
          }
        }
      }
    if(c<(m-n-1))
        cout<<"NO";
      else
        cout<<"YES";
     }
    }
  return 0;
}
