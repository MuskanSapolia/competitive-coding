#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,c=0,a,r=0,q,d=0;
  cin>>n;
  int w=n;
  while(n>0)
  {
    a=n%10;
    n=n/10;
    r=r*10+a;
    c++;
  }
  int p=r;
  while(p>0)
  {
    p=p/10;
    d++;
  }

 
  if(c!=d)
  {
    q=c-d;

  
  char s[q];
  int i=0;
  while(i<q)
  {
    s[i]='0';
    i++;
  }

  cout<<w<<s<<r;
  
  }
  else
    cout<<w<<r;
  return 0;
}

