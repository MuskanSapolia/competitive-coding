#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,temp;
  cin>>n;
  int s[n];
  int i=0;
  while(i<n)
  {
    cin>>s[i];
    i++;
  }
  for(int i=0;i<n/2;i++)
  {
  
    temp=s[i];
    s[i]=s[n-i-1];
    s[n-i]=temp;
  }
  for(int i=0;i<n;i++)
    cout<<s[i];
  return 0;
}


