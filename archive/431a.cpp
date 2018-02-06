#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d=0,e,f=0,g=0,h=0;
  cin>>a>>b>>c>>e;
  string s;
  cin>>s;

  int i=0;

  while(s[i]!='\0')
  {
    if(s[i]=='1')
      d++;
    if(s[i]=='2')
    f++;
    if(s[i]=='3')
      g++;
    if(s[i]=='4')
      h++;
    i++;
  }

  int u=d*a+f*b+g*c+h*e;
  cout<<u;
  return 0;
}
