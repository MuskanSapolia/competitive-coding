#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int f=0,o=0;
  int x,n;
  while(t--)
  {
    cin>>x;
    if(x==0)
      o++;
    else
      f++;
  }
  if(o==0)
    cout<<-1<<endl;
  else if(f<9&&o>=1)
    cout<<0;
  else if(f>=9&&o>=1)
  {
    n=f/9;
    for(int i=0;i<n*9;i++)
      cout<<5;
    for(int i=0;i<o;i++)
      cout<<0;
    
  }
  return 0;
}
