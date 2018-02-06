#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(void){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while(t--){
   int n,p;
   cin>>n>>p;
   int i=0,j=p-1;
   string s = "";
   if(p%2==0)
   {
     for(int i=1;i<=p;i++)
       s.push_back('a');
     s[p/2]='b',s[p/2 -1]='b';
  }
   else
   {
     for(int i=1;i<=p/2;i++)
       s.push_back('a');
     s.push_back('b');
     for(int i=1;i<=p/2;i++)
       s.push_back('a');
   }
   if(p==1 || p==2)
     cout<<"impossible"<<endl;
   else{
     if(p*(n/p)<=n)
     {for(int i=1;i<=n/p;i++)
     cout<<s;
     cout<<endl;}
    else
       cout<<"impossible"<<endl;
   }
   

  }
}
