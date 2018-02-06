#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  char a;
  int n,x;
  int i=1;
  while(i<=t)
  {
    cout<<"Case "<<i<<":"<<endl;
    cin>>n;
    vector<int>v;
    while(n--)
    {
      cin>>a;
      if(a=='R')
        v.pop_back();
      if(a=='Q')
      {
        if(v.empty()==1)
         cout<<"Empty"<<endl;
        
        else
            cout<<*max_element(v.begin(),v.end())<<endl;
        }
      
        if(a=='A')
         {  cin>>x;
           v.push_back(x);
         }
      
      
    }
    v.erase(v.begin(),v.end());
    i++;

  }
  return 0;
}
