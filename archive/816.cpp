#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,q;
  cin>>n>>k>>q;
  int c;
  int count;
  int a[n][2],w[q][2];
  for(int i=0;i<n;i++)   cin>>a[i][0]>>a[i][1];
  for(int j=0;j<q;j++)   cin>>w[j][0]>>w[j][1];
  
  for(int i=0;i<q;i++)
  {
    c=0;count=0;
    for(int l=w[i][0];l<=w[i][1];l++)
    {
      c=0;
      for(int j=0;j<n;j++)
          {
            
            if(l>=a[j][0]&&l<=a[j][1])
              c++;
          }
      cerr<<"c :"<<c<<endl;
      if(c>=k)
        count++;
    }
  
  cout<<count<<endl;
  }
  return 0;
}
