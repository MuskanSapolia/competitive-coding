#include<bits/stdc++.h>
using namespace std;
const int M= 1e9 + 7;
const int N = 8e5;
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int a[n];
    pair<int,int>p[N];
    for(int i=0;i<n;i++)
     cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<N;i++)
    {
      p[i].first= i;
      p[i].second = 0;
    }
    for(int i=n-1;i>=0;i--)
    {
      p[a[i]].second = 1;
      for(int j=2*a[i];j<=a[n-1];j+=a[i])
      {  
          p[a[i]].second = (p[a[i]].second + p[j].second)%M;
      }
    }
    int sum =0;
    for(int i=0;i<n;i++)
      sum = (sum + p[a[i]].second)%M;
    cout<<sum<<endl;
  }
  return 0;
}
