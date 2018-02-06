#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,x,n;
  cin>>t;
  char a;
  for(int i=0;i<t;i++)
  {
    map<int,int>m;
    stack<int>st;
    cout<<"Case "<<i+1<<":"<<endl;
    cin>>n;
    while(n--)
    {
    
      cin>>a;
      if(a=='A')
      {
        cin>>x;
        st.push(x);
        m[x]++;
      }
      if(a=='R')
      {
        if(st.empty()) continue;
        else
        {
          int k=st.top();
        st.pop();
         m[k]--;
        if(m[k]==0)
          m.erase(k);
        }
      }
      if(a=='Q')
      {
        if(st.empty()) cout<<"Empty"<<endl;
     else 
       cout<< (m.rbegin()->first) <<endl;
         
      }
    }
    m.clear();
    st.clear();
  }
  return 0;

}
