#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int count[1000];
  for(int i=0;i<1000;i++)
    count[i]=0;
  int a[n];
  for(int i = 0;i<n;i++)
    cin>>a[i];
  int h[1000][n];
    for(int i =0;i<1000;i++)
    { 
      int x  =0;
      h[i][0] = i+1;
      if(h[i][0]!=a[x])
        count[i]++;
      x++;
      for(int j = 1;j<n;j++)
      {
        h[i][j]=h[i][j-1]+k;
          if(h[i][j] != a[x])
            count[i]++;
        x++;
      }
    }
 int pos;
 int min = 10001;
 for (int i = 0;i<1000;i++)
 {
  if(count[i]<=min)
  { pos = i;
    min =  count[i];
  }
 }
cout<<min<<endl;
for(int i=0;i<n;i++)
{
  if(h[pos][i]!=a[i])
  {
    if(a[i]<h[pos][i])
    cout<<"+"<<" "<<i+1<<" "<<h[pos][i]-a[i]<<endl;
    else
    cout<<"-"<<" "<<i+1<<" "<<a[i]-h[pos][i]<<endl;    
  }
}
  return 0;
}
