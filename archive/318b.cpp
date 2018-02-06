#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  string t="heavy";
  string m="metal";
  cin>>s;
  vector<long long int>v,v2;
  for(long long int i=0;i<s.size();i++)
  {
    long long int flag=1;
    if(s[i]=='h'&&(i+4)<s.size())
    {
      for(long long int j=i,k=0;j<(i+5);j++,k++)
      {
        if(s[j]!=t[k])
        { flag=0; break;}
      }
      if(flag!=0)
        v.push_back(i);
    }
    else if(s[i]=='m'&&(i+4)<s.size())
   {
      for(long long int j=i,k=0;j<(i+5);j++,k++)
      {
        if(s[j]!=m[k])
        {flag=0;break;}
      }
      if(flag!=0) v2.push_back(i);
    }
  }
  long long int c=0;
  long long int k;
  for(long long int i=0;i<v.size();i++)
  {
     k=lower_bound(v2.begin(),v2.end(),v[i])-v2.begin();
     c= c + (v2.size()-k);
  }
  cout<<c;
  return 0;
}
