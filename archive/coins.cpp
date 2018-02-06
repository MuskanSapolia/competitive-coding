#include<bits/stdc++.h>
using namespace std;
map<long long,long long>store;

long long exchange(long long n)
{
  if(n==1||n==0) return n;
  if(store[n]) return store[n];
  store[n/2]=exchange(n/2);
  store[n/3]=exchange(n/3);
  store[n/4]=exchange(n/4);
  long long r=store[n/2]+store[n/3]+store[n/4];
  store[n] = max(r, n);
  return store[n]; 
}

int main()
{
  long long n;
  while(cin>>n){
    long long k = exchange(n);
    cout << k << endl;
    
  }
  return 0;
}

