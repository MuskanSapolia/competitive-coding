#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d,p,q;
  cin>>a>>b>>c>>d;
  if(a<=d&&a<=c)
  {
    q=a;

   d=d-a;
  c=c-a;
 a=0; 
  }
  else if(d<=a&&d<=c)
  {
    q=d;

    a=a-d;
    c=c-d;
    d=0;
  }
  else if(c<=a&&c<=d)
  {
    q=c;

    

    a=a-c;
    d=d-c;
    c=0;
  }
  if(a<=b)
  {
    p=a;
  }
  else
    p=b;
  
  cout<<256*q+32*p;
  return 0;
}
