#include<bits/stdc++.h>
using namespace std;
vector<int> sieve(int n)
{
  vector<int>prime(n+1);
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
  vector<int>primenum;
  for(int i=2;i<=n;i++)
  {
    if(prime[i]==i)
      primenum.push_back(i);
  }
  return primenum;
}
int main()
{
  int n;
  cin>>n;
  vector<int>primes;
  primes = sieve(n);
  for(int prime:primes)
    cout<<prime<<" ";
  return 0;
}
