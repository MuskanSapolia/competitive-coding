#include<bits/stdc++.h>
using namespace std;
int s1[26];
int t1[26];
int main()
{
  int n;
  cin>>n;
  string s,t;
  cin>>s>>t;
  for (int i=0;i<26;i++)
    s1[i]=t1[i]=0;
  int count=0;
  for(int i=0;i<n;i++)
  { if(s[i]!=t[i])
    {count++;
      s1[s[i]-97]++;
      t1[t[i]-97]++;
    }
  }
  if(count==1)
  {
    cout<<1<<endl;
    cout<<"-1 -1"<<endl;
  }
  else
  {
  int count1=0;
  for(int i=0;i<26;i++)
  {
    if(s1[i]>0)
    {
     if(t1[i]>0)
      count1++; 
     
    }
  }
  if(count1==0)
  {
    cout<<count<<endl;
    //cout<<"-1 -1"<<endl;
  }
  if(count1==1)
  {
    cout<<count-1<<endl;
   // cout<< <<" "<< <<endl;
  }
  else if(count1>=2)
  {
    cout<<count-2<<endl;
    //cout<< <<" "<< <<endl;
  }
  }

  return 0;
}
