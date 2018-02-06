#include<bits/stdc++.h>
using namespace std;
int main()
  {
    int t,n,x;
    char a;
    //cin>>t;
    scanf("%d", &t);
    int i=1;
    while(i<=t)
    {
      //cout<<"Case "<<i<<":"<<endl;
      printf("Case %d:\n", i);
      //cin>>n;
      scanf("%d", &n);
      multiset<int>s;
      stack<int>st;
      while(n--)
      {
        cerr << "value of n: " << n << endl;
        //cin>>a;
        scanf("\n%c", &a);
        if(a=='A')
        {
          //cin>>x;
          scanf("%d", &x);
          s.insert(x);
          st.push(x);
        }
        if(a=='Q')
        {
           //cout<<*s.rbegin()<<endl;
           //cout<<"Empty"<<endl;
          if(!s.empty())
            printf("%d\n", *s.rbegin());
          else
            printf("Empty\n");
        } 
        if(a=='R')
        {   if(!s.empty())
          {
            int k=st.top();
        set<int>::iterator it;
        it=s.lower_bound(k);
        s.erase(it);
          }
        }

      }
      while(!st.empty()) { st.pop(); }
      s.clear();
      i++;
    }
    return 0;
}
