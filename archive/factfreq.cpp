#include<bits/stdc++.h>
using namespace std;
vector<int> sieve(int n)
{
  vector<int> prime(n+1);
  for(int i=0;i<=n;i++)
    prime[i]=i;
  for(int i=2;i<=n;i++)
  {
    if(prime[i]==i)
    {
      for(int j=i;j<=n;j+=i)
        prime[j]=i;
    }
  }
  vector<int> prime1;
  for(int i=2;i<=n;i++)
    if(prime[i]==i)
      prime1.push_back(i);
  return prime1;
}
map<int,int> pfact_freq(int n)
{
  vector<int> prime = sieve(n);
  map<int,int>freq;
  for(int p:prime)
  {
    while(n%p==0)
    {
      freq[p]+=1;
      n=n/p;
    }
  }
  return freq;
}
int main()
{
  int n;
  cin>>n;
  map<int,int>pfact;
  pfact = pfact_freq(n);
  map<int,int>::iterator it;
  for(it = pfact.begin();it!=pfact.end();it++)
    cout<<it->first<<":"<<it->second<<"  ";


  
  return 0;
}
